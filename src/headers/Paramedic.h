#pragma once

#include "Employee.h"
#include "Patient.h"

class Paramedic : public Employee
{
private:
    /* data */
public:
    Paramedic(/* args */);
    
    void ratuj(Patient& patient); // idk metody jakies
};

