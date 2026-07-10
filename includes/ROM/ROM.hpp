#pragma once 
#include <iostream>
#include <stdbool.h>
#include "../Memory/memory.hpp"

using uint8  = unsigned char;
using uint16 = unsigned short;
using uint32 = unsigned int;
using uint64 = unsigned long long;

using namespace std;

class ROM
{
public:
    static bool load(const string& path, memory& mem, uint16 address = 0x0000);
    ROM();
};