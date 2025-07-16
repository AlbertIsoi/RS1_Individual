from pymodbus.client import ModbusTcpClient

# Robot IP and port
ROBOT_IP = '192.168.88.66'  # Your robot's IP
ROBOT_PORT = 9760           # Default MODBUS TCP port

# Register address and value (example: trigger action)
REGISTER_ADDRESS = 800      # Example address
VALUE_TO_WRITE = 1          # Example command (e.g., start motion)

def main():
    client = ModbusTcpClient(ROBOT_IP, port=ROBOT_PORT)
    if client.connect():
        print(f"[✓] Connected to robot at {ROBOT_IP}:{ROBOT_PORT}")
        
        # Send a command: write 1 to register 800
        response = client.write_register(REGISTER_ADDRESS, VALUE_TO_WRITE)
        if response.isError():
            print("[!] Error sending command:", response)
        else:
            print(f"[→] Sent value {VALUE_TO_WRITE} to register {REGISTER_ADDRESS}")

        client.close()
        print("[✓] Connection closed.")
    else:
        print("[X] Failed to connect to robot.")

if __name__ == "__main__":
    main()
