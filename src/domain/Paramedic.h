#pragma once

#include "Employee.h"
#include "Patient.h"

class Paramedic : public Employee
{
  private:
  public:
    Paramedic();
    Paramedic(std::string first_name, std::string last_name);

    void doFirstAid(Patient &patient);

    friend std::ostream &operator<<(std::ostream &s, const Paramedic &paramedic);
};

