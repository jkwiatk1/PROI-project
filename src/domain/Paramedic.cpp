#include <iostream>
#include "Paramedic.h"

using namespace std;

Paramedic::Paramedic() : Employee() {}

Paramedic::Paramedic(string first_name, string last_name)
    : Employee(first_name, last_name)
{
}

void Paramedic::doFirstAid(Patient &patient)
{
    addEntry(patient, "First aid");
}

std::ostream &operator<<(std::ostream &s, const Paramedic &paramedic)
{
    return s << "Paramedic{id = " << paramedic.getID()
             << ", first_name = " << paramedic.getFirstName()
             << ", last_name = " << paramedic.getLastName() << "}";
}
