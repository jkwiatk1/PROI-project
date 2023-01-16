#pragma once

#include <vector>

#include "Person.h"
#include "Entry.h"

enum patient_status { Hospitalized, Discharged };

class Patient : public Person
{
  private:
    std::vector<Entry> health_card;
    patient_status status;

  public:
    Patient(std::string first_name, std::string last_name);

    void hospitalize();
    void discharge();
    void addEntry(Entry entry);
};

