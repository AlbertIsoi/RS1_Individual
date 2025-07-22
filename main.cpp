#include <iostream>
#include <modbus/modbus.h>
#include <unistd.h>

int main() {
    const char* ROBOT_IP = "192.168.88.66";
    const int ROBOT_PORT = 9760;

    // 1. Create Modbus TCP context
    modbus_t* ctx = modbus_new_tcp(ROBOT_IP, ROBOT_PORT);
    if (ctx == NULL) {
        std::cerr << "❌ Unable to create Modbus context" << std::endl;
        return -1;
    }

    // 2. Connect to the robot
    if (modbus_connect(ctx) == -1) {
        std::cerr << "❌ Connection failed: " << modbus_strerror(errno) << std::endl;
        modbus_free(ctx);
        return -1;
    }
    std::cout << "✅ Connected to robot at " << ROBOT_IP << std::endl;

    // 3. Get joint positions from user
    uint16_t joints[6];
    std::cout << "Enter joint angles (J1–J6 in robot units):\n";
    for (int i = 0; i < 6; ++i) {
        std::cout << "J" << (i + 1) << ": ";
        std::cin >> joints[i];
    }

    // 4. Write joint angles to holding registers 600–605
    int rc = modbus_write_registers(ctx, 600, 6, joints);
    if (rc == -1) {
        std::cerr << "❌ Failed to write joint positions: " << modbus_strerror(errno) << std::endl;
        modbus_close(ctx);
        modbus_free(ctx);
        return -1;
    }
    std::cout << "✅ Joint positions sent." << std::endl;

    // 5. Set motion mode (902 = 0)
    uint16_t mode = 0;
    modbus_write_register(ctx, 902, mode);

    // 6. Set speed percent (903 = 50)
    uint16_t speed = 50;
    modbus_write_register(ctx, 903, speed);

    // 7. Trigger movement (901 = 1 then 0)
    modbus_write_register(ctx, 901, 1);
    sleep(1);
    modbus_write_register(ctx, 901, 0);

    std::cout << "🚀 Robot movement triggered." << std::endl;

    // 8. Clean up
    modbus_close(ctx);
    modbus_free(ctx);
    return 0;
}

