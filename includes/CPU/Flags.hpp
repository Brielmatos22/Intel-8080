#pragma once

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
