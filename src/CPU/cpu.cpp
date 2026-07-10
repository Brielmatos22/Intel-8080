#include "../../includes/CPU/Cpu.hpp"
#include "../../includes/CPU/Flags.hpp"


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