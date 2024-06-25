#include <iostream>
#include "protocols.hpp"

int main() {
    // Example usage of SCADAProtocol enum
    SCADAProtocol protocol = SCADAProtocol::MODBUS;

    // Print the protocol value
    std::cout << "Selected protocol: " << static_cast<int>(protocol) << std::endl;

    return 0;
}
