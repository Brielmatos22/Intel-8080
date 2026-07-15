#include "../../includes/CPU/Cpu.hpp"
#include "../../includes/CPU/Flags.hpp"
#include "../../includes/Memory/memory.hpp"
#include "../../includes/CPU/opcode.hpp"


Cpu::Cpu()
{
    reset();
}

void Cpu::reset()
{
    A = B = C = D = E = F = H = L = 0;

    SP = PC = 0;

    flags.reset();
}

Byte Cpu::fetchByte(int &Circles){
        Byte dataNew = Memory.data[Cpu::PC];
        Cpu::PC++;
        Circles--;
        return dataNew;

}

Word Cpu::fetchWord(int& Circles){
    Word data_low = (Word) Memory.data[Cpu::PC];
    Cpu::PC++;
    Circles--;
}

void Cpu::execute(int Circles){
    
    while (Circles > 0)
    {
        Byte Seek = Cpu::fetchWord(Circles);
        switch (Seek)
        {
        case OPCODES::LDA_IM:
            Byte data_value = fetchByte(Circles);
            Cpu::A = data_value;
            Circles--;

            if(A == 0)
                flags.Z = true;
            else
                flags.Z = false;

            if ((A & 0b10000000) > 0)
                Cpu::D = A;


            break;
        
        default:
            break;
        }
        
    }
    
}