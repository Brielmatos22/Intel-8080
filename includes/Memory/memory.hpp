#pragma once
#include "../Utils/Constants.hpp"

using uint8  = unsigned char;
using uint16 = unsigned short;
using uint32 = unsigned int;
using uint64 = unsigned long long;

using namespace Constants;
class memory
{
public:
   

   uint8 data[SIZE];
   
   const uint8 read(uint16 address);
   void write(uint16 address, uint8 value);

   void reset();
};
