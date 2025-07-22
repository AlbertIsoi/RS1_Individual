#include <iostream>
#include <modbus/modbus.h>
#include <unistd.h>   // for sleep
#include <cstring>    // for memset

int main() {
    const char* ROBOT_IP = "192.168.88.66";
    const int ROBOT_PORT = 9760;

    // Create Modbus TCP context
    modbus_t* ctx = modbus_new_tcp(ROBOT_IP, ROBOT_PORT);
    if (ctx == nullptr) {
        std::cerr << "[!] Failed to create Modbus context\n";
        return 1;
    }

    // Connect to robot
    if (modbus_connect(ctx) == -1) {
        std::cerr << "[!] Connection failed: " << modbus_strerror(errno) << std::endl;
        modbus_free(ctx);
        return 1;
    }

    std::cout << "[✓] Connected to robot at " << ROBOT_IP << ":" << ROBOT_PORT << std::endl;

    // Get joint values from user
    uint16_t joints[6];
    std::cout << "Enter joint positions (integers for J1 to J6):\n";
    for (int i = 0; i < 6; ++i) {
        std::cout << "J" << (i + 1) << ": ";
        std::cin >> joints[i];
    }

    // Write joint positions to registers 3000–3005
    int rc = modbus_write_registers(ctx, 3000, 6, joints);
    if (rc == -1) {
        std::cerr << "[!] Failed to write joints: " << modbus_strerror(errno) << std::endl;
        modbus_close(ctx);
        modbus_free(ctx);
        return 1;
    }

    // Set speed (register 3010) and motion mode (register 902)
    modbus_write_register(ctx, 3010, 50); // speed 50%
    modbus_write_register(ctx, 902, 0);   // 0 = Joint mode

    // Trigger motion (register 901)
    modbus_write_register(ctx, 901, 1);
    sleep(1);
    modbus_write_register(ctx, 901, 0);

    std::cout << "[→] Motion command sent in joint mode.\n";

    // Cleanup
    modbus_close(ctx);
    modbus_free(ctx);
    return 0;
}

