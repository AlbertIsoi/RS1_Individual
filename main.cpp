#include <modbus/modbus.h>
#include <iostream>

#define ROBOT_IP "192.168.88.66"
#define ROBOT_PORT 9760
#define TASK_REGISTER 900
#define TASK_START 1

int main() {
    modbus_t *ctx = modbus_new_tcp(ROBOT_IP, ROBOT_PORT);
    if (ctx == NULL) {
        std::cerr << "Unable to create the libmodbus context\n";
        return -1;
    }

    if (modbus_connect(ctx) == -1) {
        std::cerr << "Connection failed: " << modbus_strerror(errno) << std::endl;
        modbus_free(ctx);
        return -1;
    }

    std::cout << "[✓] Connected to robot\n";

    int rc = modbus_write_register(ctx, TASK_REGISTER, TASK_START);
    if (rc == -1) {
        std::cerr << "[!] Failed to write: " << modbus_strerror(errno) << std::endl;
    } else {
        std::cout << "[→] Task start command sent to register " << TASK_REGISTER << std::endl;
    }

    modbus_close(ctx);
    modbus_free(ctx);
    return 0;
}
