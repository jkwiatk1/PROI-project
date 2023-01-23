#include "Results.h"

bool Results::exist(void)
{
    return patients.size() > 0 || doctors.size() > 0 || nurses.size() > 0
           || paramedics.size() > 0 || assistants.size() > 0
           || departments.size() > 0;
}

void Results::addResult(std::vector<Patient *> &v)
{
    patients.insert(patients.end(), v.begin(), v.end());
}
void Results::addResult(std::vector<Doctor *> &v)
{
    doctors.insert(doctors.end(), v.begin(), v.end());
}
void Results::addResult(std::vector<Nurse *> &v)
{
    nurses.insert(nurses.end(), v.begin(), v.end());
}
void Results::addResult(std::vector<Paramedic *> &v)
{
    paramedics.insert(paramedics.end(), v.begin(), v.end());
}
void Results::addResult(std::vector<Assistant *> &v)
{
    assistants.insert(assistants.end(), v.begin(), v.end());
}
void Results::addResult(std::vector<Department *> &v)
{
    departments.insert(departments.end(), v.begin(), v.end());
}

bool Results::getShowPatientInfo(void) const
{
    return showPatientInfo;
}
void Results::setShowPatientInfo(bool show)
{
    showPatientInfo = show;
}
bool Results::getShowDepartmentInfo(void) const
{
    return showDepartmentInfo;
}
void Results::setShowDepartmentInfo(bool show)
{
    showDepartmentInfo = show;
}
