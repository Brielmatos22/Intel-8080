#include "../../includes/CPU/Flags.hpp"

void Flags::reset(){
    AC = Z = P = CV = S = false;
}