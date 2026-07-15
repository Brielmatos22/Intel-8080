#include "../../includes/CPU/Cpu.hpp"
#include "../../includes/CPU/Flags.hpp"
#include "../../includes/Memory/memory.hpp"

void memory::init(){
  
    for(int i = 0; i < SIZE; i++){
        memory::data[i] = 0;
    }
}

const Byte memory::read(memory &memory, int& Circles,Word address){
    cpu.PC++;
    Circles-= 3;
    return memory::data[address];
}

void memory::write(Word address, Byte value, int& Circles){
    Circles--;
    memory::data[address] = value;
   
}