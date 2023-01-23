#pragma once

#include <vector>
#include "Assistant.h"
#include "Department.h"
#include "Doctor.h"
#include "Nurse.h"
#include "Paramedic.h"
#include "Patient.h"

class Results {
    private:
        bool showPatientInfo;
        bool showDepartmentInfo;

    public:
        std::vector<Patient *> patients;
        std::vector<Doctor *> doctors;
        std::vector<Nurse *> nurses;
        std::vector<Paramedic *> paramedics;
        std::vector<Assistant *> assistants;
        std::vector<Department *> departments;
        void addResult(std::vector<Patient *> &v);
        void addResult(std::vector<Doctor *> &v);
        void addResult(std::vector<Nurse *> &v);
        void addResult(std::vector<Paramedic *> &v);
        void addResult(std::vector<Assistant *> &v);
        void addResult(std::vector<Department *> &v);
        bool exist(void);
        bool getShowPatientInfo(void) const;
        void setShowPatientInfo(bool);
        bool getShowDepartmentInfo(void) const;
        void setShowDepartmentInfo(bool);
};
