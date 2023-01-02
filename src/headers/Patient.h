#pragma once

#include "Wpis.h"
#include <vector>

enum patient_status {Hospitalized, Discharged};

class Patient : public Person
{
private:
    std::vector<Wpis> karta_zdrowia;
    patient_status status;
public:
    Patient();
};


