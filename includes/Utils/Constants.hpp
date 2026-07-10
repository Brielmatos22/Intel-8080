#pragma once 

using uint8  = unsigned char;
using uint16 = unsigned short;
using uint32 = unsigned int;
using uint64 = unsigned long long;

namespace Constants
{
    static constexpr uint32 SIZE = 0x10000; //64 KB
    static constexpr uint8 REGISTER_SIZE = 8;
    static constexpr int WIDTH = 224;
    static constexpr int HEIGHT = 256;
    constexpr uint16 RESET_VECTOR = 0x0000;
}