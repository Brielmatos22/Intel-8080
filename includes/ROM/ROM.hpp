#pragma once 
#include <iostream>
#include <stdbool.h>
#include "../Memory/memory.hpp"

class ROM
{
public:
    static bool load(const std::string& path, memory& mem, uint16_t address = Constants::RESET_VECTOR);
    ROM();
};