#include "../../includes/Screen/Screen.hpp"

using uint8  = unsigned char;
using uint16 = unsigned short;
using uint32 = unsigned int;
using uint64 = unsigned long long;

Screen::Screen()
{
    clear();
}

void Screen::clear()
{
    for(auto& pixel : frameBuffer)
    {
        pixel = 0x00000000;
    }
}

void Screen::update(const uint8 *videoMemory)
{

}

void Screen::render()
{
    
}