#pragma once

#include "Patient.h"
#include <vector>

class Room
{
private:
    int capacity;
    int nr;
    std::vector<Patient*> patients;
public:
    Room(/* args */);

};

