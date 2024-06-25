// protocols.hpp

#ifndef PROTOCOLS_HPP
#define PROTOCOLS_HPP

enum class SCADAProtocol {
    MODBUS,
    DNP3,
    OPCUA,
    IEC60870,
    ICCP,
    MQTT,
    SNMP,
    BACNET,
    PROFIBUS,
    EtherNetIP,
    Other
};

#endif // PROTOCOLS_HPP
