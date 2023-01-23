#pragma once

#include <vector>

#include "Person.h"
#include "Entry.h"

class Room; // Don't remove, or the project wont't compile.

enum patient_status { Hospitalized, Discharged };

class Patient : public Person
{
  private:
    std::vector<Entry> health_card;
    patient_status status;
    Room *assigned_room;

  public:
    Patient();
    Patient(std::string first_name, std::string last_name);

    std::vector<Entry> getHealthCard() const;
    Room *getRoom() const;
    void assignRoom(Room *room);
    void exitRoom();

    void hospitalize();
    void discharge();
    void addEntry(Entry entry);
    friend std::ostream &operator<<(std::ostream &s, const Patient &patient);

};

