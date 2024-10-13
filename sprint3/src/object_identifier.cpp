#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>
#include <visualization_msgs/msg/marker.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <tf2_ros/transform_broadcaster.h>
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <cmath>
#include <vector>

class ObjectIdentifier : public rclcpp::Node
{
public:
    ObjectIdentifier()
    : Node("object_identifier"),
      tf_buffer_(std::make_shared<rclcpp::Clock>(RCL_ROS_TIME)), 
      tf_listener_(tf_buffer_)
    {
        // Subscribing to the LaserScan data
        laser_scan_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
            "/scan", 10, std::bind(&ObjectIdentifier::laserScanHandler, this, std::placeholders::_1));

        // Visualization Marker publisher
        viz_marker_pub_ = this->create_publisher<visualization_msgs::msg::Marker>("/object_marker", 10);

        // Publisher for detected object position (optional)
        position_pub_ = this->create_publisher<geometry_msgs::msg::PoseStamped>("/object_pose", 10);

        // Initializing the transform broadcaster
        tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);

        // Parameters for object size
        object_diameter_ = 0.30;
        object_radius_ = object_diameter_ / 2.0;
    }

private:
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr laser_scan_sub_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr viz_marker_pub_;
    rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr position_pub_;
    std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;

    tf2_ros::Buffer tf_buffer_;  
    tf2_ros::TransformListener tf_listener_;  

    double object_diameter_;
    double object_radius_;

    void laserScanHandler(const sensor_msgs::msg::LaserScan::SharedPtr scan_msg)
    {
        std::vector<float> scan_ranges = scan_msg->ranges;
        size_t point_count = scan_ranges.size();

        // Laser scan metadata
        double angle_start = scan_msg->angle_min;
        double angle_interval = scan_msg->angle_increment;

        // Storing Cartesian coordinates
        std::vector<double> cart_x, cart_y;

        // Convert polar to Cartesian coordinates
        for (size_t i = 0; i < point_count; ++i)
        {
            double angle = angle_start + i * angle_interval;
            double x_coord = scan_ranges[i] * std::cos(angle);
            double y_coord = scan_ranges[i] * std::sin(angle);
            cart_x.push_back(x_coord);
            cart_y.push_back(y_coord);
        }

        // Identify cylindrical object in laser data
        int obj_index = locateObject(cart_x, cart_y);
        if (obj_index != -1)
        {
            double obj_x = cart_x[obj_index];
            double obj_y = cart_y[obj_index];

            // Publish marker for visualization
            publishMarker(obj_x, obj_y);

            // Broadcast transform of the object
            broadcastTransform(obj_x, obj_y);
        }
    }

    int locateObject(const std::vector<double>& cart_x, const std::vector<double>& cart_y)
    {
        size_t point_count = cart_x.size();
        std::vector<double> gaps(point_count - 1);

        // Calculate the distances between points
        for (size_t i = 0; i < point_count - 1; ++i)
        {
            gaps[i] = std::hypot(cart_x[i + 1] - cart_x[i], cart_y[i + 1] - cart_y[i]);
        }

        // Threshold for detecting object clusters
        double gap_threshold = 0.15;

        // Identify clusters of points that could represent an object
        for (size_t i = 0; i < point_count - 1; ++i)
        {
            std::vector<size_t> cluster_indices;
            cluster_indices.push_back(i);

            while (i < point_count - 1 && gaps[i] < gap_threshold)
            {
                cluster_indices.push_back(i + 1);
                ++i;
            }

            double cluster_min_x = cart_x[cluster_indices.front()];
            double cluster_max_x = cart_x[cluster_indices.back()];
            double cluster_min_y = cart_y[cluster_indices.front()];
            double cluster_max_y = cart_y[cluster_indices.back()];

            double cluster_width = std::hypot(cluster_max_x - cluster_min_x, cluster_max_y - cluster_min_y);

            // Check if cluster width matches expected object size
            if (cluster_width >= 0.25 && cluster_width <= 0.30)
            {
                return cluster_indices.front();
            }
        }

        return -1;
    }

    void publishMarker(double x, double y)
    {
        visualization_msgs::msg::Marker marker;
        marker.ns = "object";
        marker.id = 0;
        marker.type = visualization_msgs::msg::Marker::CYLINDER;
        marker.action = visualization_msgs::msg::Marker::ADD;

        marker.scale.x = object_diameter_;
        marker.scale.y = object_diameter_;
        marker.scale.z = 1.0;
        marker.color.r = 0.0;
        marker.color.g = 0.0;
        marker.color.b = 1.0;
        marker.color.a = 1.0;

        geometry_msgs::msg::TransformStamped transformStamped;

        try
        {
            transformStamped = tf_buffer_.lookupTransform("map", "base_link", tf2::TimePointZero);

            geometry_msgs::msg::PointStamped obj_point_base;
            obj_point_base.header.frame_id = "base_link";
            obj_point_base.point.x = x;
            obj_point_base.point.y = y;

            geometry_msgs::msg::PointStamped obj_point_map;
            tf2::doTransform(obj_point_base, obj_point_map, transformStamped);

            marker.pose.position.x = obj_point_map.point.x;
            marker.pose.position.y = obj_point_map.point.y;
            marker.pose.position.z = 0.0;
            marker.pose.orientation.w = 1.0;

            marker.header.frame_id = "map";
            marker.header.stamp = this->get_clock()->now();

            viz_marker_pub_->publish(marker);
        }
        catch (const tf2::TransformException &ex)
        {
            RCLCPP_WARN(this->get_logger(), "Transform error: %s", ex.what());
        }
    }

    void broadcastTransform(double x, double y)
    {
        geometry_msgs::msg::TransformStamped transformStamped;

        transformStamped.header.stamp = this->get_clock()->now();
        transformStamped.header.frame_id = "base_link";
        transformStamped.child_frame_id = "object";
        transformStamped.transform.translation.x = x;
        transformStamped.transform.translation.y = y;
        transformStamped.transform.translation.z = 0.0;
        transformStamped.transform.rotation.w = 1.0;

        tf_broadcaster_->sendTransform(transformStamped);
    }
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ObjectIdentifier>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
