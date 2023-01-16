#pragma once

#include "Employee.h"
#include "Patient.h"

enum Specialities {oculist, surgeon, cardiologist, neurologist};

class Doctor : public Employee
{
private:
    Specialities speciality;
public:
    Doctor(std::string first_name, std::string last_name, Specialities speciality);
    
    void examine(Patient& patient);
    // pytanie czy robic klase Medicine
    void prescribeMedicine(Patient& patient);
};
