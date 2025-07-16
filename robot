#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <unistd.h>
#include <cstring>

// Robot settings
const char* ROBOT_IP = "192.168.88.66";
const int ROBOT_PORT = 9760;

struct ModbusTCPFrame {
    uint16_t transaction_id;
    uint16_t protocol_id;
    uint16_t length;
    uint8_t unit_id; 
    uint8_t function_code;
    uint16_t register_address;
    uint16_t data;
};

// Send Modbus TCP frame
int sendModbusCommand(int sock, ModbusTCPFrame frame) {
    frame.transaction_id = htons(frame.transaction_id);
    frame.protocol_id    = htons(frame.protocol_id);
    frame.length         = htons(frame.length);
    frame.register_address = htons(frame.register_address);
    frame.data           = htons(frame.data);

    return send(sock, &frame, sizeof(frame), 0);
}

int main() {
    int sockfd;
    struct sockaddr_in robot_addr;

    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        std::cerr << "Socket creation error: " << strerror(errno) << std::endl;
        return 1;
    }

    robot_addr.sin_family = AF_INET;
    robot_addr.sin_port = htons(ROBOT_PORT);

    if (inet_pton(AF_INET, ROBOT_IP, &robot_addr.sin_addr) <= 0) {
        std::cerr << "Invalid IP address or unsupported: " << ROBOT_IP << std::endl;
        close(sockfd);
        return 1;
    }

    if (connect(sockfd, (struct sockaddr*)&robot_addr, sizeof(robot_addr)) < 0) {
        std::cerr << "Connection failed: " << strerror(errno) << std::endl;
        close(sockfd);
        return 1;
    }

    std::cout << "Connected successfully to robot.\n";

    // Example MODBUS command
    ModbusTCPFrame frame{};
    frame.transaction_id   = 1;
    frame.protocol_id      = 0;
    frame.length           = 6;
    frame.unit_id          = 1;
    frame.function_code    = 6; // Write single register
    frame.register_address = 800;
    frame.data             = 1;

    if (sendModbusCommand(sockfd, frame) < 0) {
        std::cerr << "Send failed: " << strerror(errno) << std::endl;
        close(sockfd);
        return 1;
    }

    std::cout << "MODBUS command sent successfully.\n";

    // Optional receive
    char recvbuf[512];
    int recvResult = recv(sockfd, recvbuf, sizeof(recvbuf), 0);
    if (recvResult > 0) {
        std::cout << "Received response from robot.\n";
    } else if (recvResult == 0) {
        std::cout << "Connection closed by robot.\n";
    } else {
        std::cerr << "Receive failed: " << strerror(errno) << std::endl;
    }

    close(sockfd);
    return 0;
}
