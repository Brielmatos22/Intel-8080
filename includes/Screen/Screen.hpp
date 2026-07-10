#pragma once
#include "../Utils/Constants.hpp"

using uint8  = unsigned char;
using uint16 = unsigned short;
using uint32 = unsigned int;
using uint64 = unsigned long long;

using namespace Constants;

class Screen
{

public:
    

    Screen();

    void clear();
    void update(const uint8 *videoMemory);
    void render();
    
private:
    uint32 frameBuffer[WIDTH * HEIGHT];
};
