#pragma once

#include <cstdint>
#include "Flags.hpp"
#include "../memory.hpp"

using uint8  = unsigned char;
using uint16 = unsigned short;
using uint32 = unsigned int;
using uint64 = unsigned long long;

using int8   = signed char;
using int16  = signed short;
using int32  = signed int;
using int64  = signed long long;

class Cpu
{
public:
    uint8 A;
    uint8 B;
    uint8 C;
    uint8 D;
    uint8 E;
    uint8 F;
    uint8 G;
    uint8 H;

    uint16 SP;
    uint16 PC;

    Flags flags;
    Memory memory;

    Cpu();

    void reset();
    void step();
    void execute();

    uint16 fetchByte();
    uint16 fetchWord();
};