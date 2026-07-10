#pragma once
#include "Cpu.hpp"

using uint8  = unsigned char;
using uint16 = unsigned short;
using uint32 = unsigned int;
using uint64 = unsigned long long;

class opcode
{
public:
    static void execute(Cpu& cpu, uint8 opcode);
};


