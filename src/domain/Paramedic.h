#pragma once

#include "Employee.h"
#include "Patient.h"

class Paramedic : public Employee
{
  private:
  public:
    Paramedic(std::string first_name, std::string last_name);

    void doFirstAid(Patient &patient);

};

