#pragma once

#include "Employee.h"
#include "Patient.h"

enum Specialities {okulista, chirurg, kardiolog, neurolog}; //itp. mozna dopisac

class Doctor : public Employee
{
private:
    Specialities speciality;
public:
    Doctor(/* args */);
    
    void examine(Patient& patient);
    void prescribeMedicine(Patient& patient);
};

