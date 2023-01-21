#pragma once

#include "Room.h"

class Department
{
  private:
    std::vector<Room> rooms;
    std::string name;

  public:
    Department(std::string name);

    void addRoom(Room room);
    void removeRoom(Room room);

    bool fuzzyEquals(const Department &other);
};

