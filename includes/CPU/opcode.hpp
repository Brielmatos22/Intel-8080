#pragma once
#include "Cpu.hpp"

class opcode
{
public:
    static void execute(Cpu &cpu, uint8_t opcode);
};

namespace OPCODES
{
    static constexpr Byte LDA_IM = 0x0A;
    static constexpr Byte FLAG_CY = 0x01;
    constexpr Byte FLAG_P = 0x04;
    constexpr Byte FLAG_AC = 0x10;
    constexpr Byte FLAG_Z = 0x40;
    constexpr Byte FLAG_S = 0x80;
};
