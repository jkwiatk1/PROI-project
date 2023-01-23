#include "Results.h"

bool Results::exist(void)
{
    return patients.size() > 0 || doctors.size() > 0 || nurses.size() > 0
           || paramedics.size() > 0 || assistants.size() > 0
           || departments.size() > 0;
}
Results::Results()
{
}
Results::Results(std::vector<Patient *> &v) : patients(v)
{
}
Results::Results(std::vector<Doctor *> &v) : doctors(v)
{
}
Results::Results(std::vector<Nurse *> &v) : nurses(v)
{
}
Results::Results(std::vector<Paramedic *> &v) : paramedics(v)
{
}
Results::Results(std::vector<Assistant *> &v) : assistants(v)
{
}
Results::Results(std::vector<Department *> &v) : departments(v)
{
}
