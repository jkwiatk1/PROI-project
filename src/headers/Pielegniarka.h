#pragma once

#include "Pracownik.h"
#include "Pacjent.h"

class Pielegniarka : public Pracownik
{
private:
    /* data */
public:
    Pielegniarka(/* args */);

    void podajLek(Pacjent& pacjent);
    void zrobZastrzyk(Pacjent& pacjent);
};
