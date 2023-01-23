#pragma once

#include "Room.h"
#include "room_not_empty_exception.h"

class Department
{
  private:
    std::vector<Room> rooms;
    std::string name;

  public:
    Department(std::string name);
    std::string getName() const;
    // std::vector<Room> getRooms() const;
    void setName(std::string name);

    void addRoom(Room room);
    void removeRoom(Room room);
    void removeAllRooms();

    bool fuzzyEquals(const Department &other);
    friend std::ostream &operator<<(std::ostream &s, const Department &patient);
};
