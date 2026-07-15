#pragma once 
#include <cstdint>

namespace Constants
{
    using Mem = uint32_t;
    using Byte = uint8_t;
    using Word = uint16_t;

    static constexpr Mem SIZE = 0x10000; //64 KB
    static constexpr int REGISTER_SIZE = 8;
    static constexpr int WIDTH = 224;
    static constexpr int HEIGHT = 256;
    constexpr Word RESET_VECTOR = 0x0000;
}