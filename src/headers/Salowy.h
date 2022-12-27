#pragma once

#include "Pacjent.h"
#include "Sala.h"
#include "Pracownik.h"

class Salowy
{
private:
    /* data */
public:
    Salowy(/* args */);
    
    void umiescPacjenta(Pacjent& pacjent, Sala& sala);
    void wypiszPacjenta(Pacjent& pacjent, Sala& sala);
};

