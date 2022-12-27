#pragma once

#include "Wpis.h"
#include <vector>

class Pacjent : public Osoba
{
private:
    std::vector<Wpis> karta_zdrowia;
public:
    Pacjent();
};


