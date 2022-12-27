#pragma once

#include "Pracownik.h"
#include "Pacjent.h"

enum Specjalnosci {okulista, chirurg, kardiolog, neurolog}; //itp. mozna dopisac

class Lekarz : public Pracownik
{
private:
    Specjalnosci specjalnosc;
public:
    Lekarz(/* args */);
    
    void badaj(Pacjent& pacjent);
    void przypiszLek(Pacjent& pacjent);
};

