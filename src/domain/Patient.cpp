#include "Patient.h"

using namespace std;


Patient::Patient(string first_name, string last_name)
    : Person(first_name, last_name)
{
    health_card = vector<Entry>();
    status = Hospitalized;
}

void Patient::hospitalize()
{
    status = Hospitalized;
}

void Patient::discharge()
{
    status = Discharged;
}

void Patient::addEntry(Entry entry)
{
    health_card.push_back(entry);
}
