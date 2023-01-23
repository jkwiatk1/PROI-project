#pragma once

#include <vector>
#include "Assistant.h"
#include "Department.h"
#include "Doctor.h"
#include "Nurse.h"
#include "Paramedic.h"
#include "Patient.h"

class Results {
    public:
        std::vector<Patient *> patients;
        std::vector<Doctor *> doctors;
        std::vector<Nurse *> nurses;
        std::vector<Paramedic *> paramedics;
        std::vector<Assistant *> assistants;
        std::vector<Department *> departments;
        Results(std::vector<Patient *> &v);
        Results(std::vector<Doctor *> &v);
        Results(std::vector<Nurse *> &v);
        Results(std::vector<Paramedic *> &v);
        Results(std::vector<Assistant *> &v);
        Results(std::vector<Department *> &v);
        Results();
        bool exist(void);
};
