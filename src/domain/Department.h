#pragma once

#include "Room.h"

class Department
{
  private:
    std::vector<Room> rooms;
    std::string name;

  public:
    Department(std::string name);

    std::string getName() const;
    void addRoom(Room room);

    // TODO: implement
    Department& operator=(const Department& source); 
};

