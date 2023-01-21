#include "Paramedic.h"

using namespace std;

Paramedic::Paramedic(string first_name, string last_name)
    : Employee(first_name, last_name)
{
}

void Paramedic::doFirstAid(Patient &patient)
{
    addEntry(patient, "First aid");
}
