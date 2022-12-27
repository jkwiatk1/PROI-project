#pragma once

#include "Pracownik.h"
#include "Pacjent.h"

class Ratownik : public Pracownik
{
private:
    /* data */
public:
    Ratownik(/* args */);
    
    void ratuj(Pacjent& pacjent); // idk metody jakies
};

