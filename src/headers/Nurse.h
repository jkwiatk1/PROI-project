#pragma once

#include "Employee.h"
#include "Patient.h"

class Nurse : public Employee
{
private:
    /* data */
public:
    Nurse(/* args */);

    void administerMedicine(Patient& patient);
};
