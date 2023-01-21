#pragma once

#include <vector>

#include "Person.h"
#include "Entry.h"
#include "Room.h"

enum patient_status { Hospitalized, Discharged };

class Patient : public Person
{
  private:
    std::vector<Entry> health_card;
    patient_status status;
    Room *assigned_room;

  public:
    Patient(std::string first_name, std::string last_name);

    std::vector<Entry> getHealthCard() const;
    Room* getRoom() const;
    void assignRoom(Room *room);
    void exitRoom();

    void hospitalize();
    void discharge();
    void addEntry(Entry entry);
};

