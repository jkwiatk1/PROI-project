#pragma once

#include "Patient.h"
#include "Room.h"
#include "Employee.h"

class Assistant : public Employee
{
private:
    /* data */
public:
    Assistant(/* args */);
    
    void putPatient(Patient& Patient, Room& sala);
    void dischargePatient(Patient& Patient, Room& sala);
};

