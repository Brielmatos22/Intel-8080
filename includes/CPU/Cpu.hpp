#pragma once

#include <cstdint>
#include "Flags.hpp"
#include "../Memory/memory.hpp"


class Cpu
{
public:
    uint8_t A;
    uint8_t B;
    uint8_t C;
    uint8_t D;
    uint8_t E;
    uint8_t F;
    uint8_t H;
    uint8_t L;

    uint16_t SP;
    uint16_t PC;

    Flags flags;
    memory &Memory;

    Cpu();

    void reset();
    void step();
    void execute(int);

    Byte fetchByte(int&);
    Word fetchWord(int&);
};