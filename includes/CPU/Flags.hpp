#pragma once

using uint8 = unsigned char;
using uint16 = unsigned short;
using uint32 = unsigned int;
using uint64 = unsigned long long;

class Flags
{
public:
    bool Z = false;
    bool S = false;
    bool P = false;
    bool CV = false;
    bool AC = false;

    Flags();

    void reset();
    Flags();
};
