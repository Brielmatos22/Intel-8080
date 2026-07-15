#pragma once
#include "../Utils/Constants.hpp"
#include <cstdio>

using namespace Constants;

class memory
{
public:
   
   uint8_t data[SIZE];
   Cpu cpu;
   
   const Byte read(memory&, int&, Word address);
   void write(Word address, Byte, int&);

   void reset();
   void init();
};
