#pragma once

#include <stdexcept>

// TODO: rename `Room_not_empty_exception` -> `room_not_empty` (remember to
// change the filename)
class Room_not_empty_exception : public std::runtime_error
{
  public:
    Room_not_empty_exception(int room_nr)
        : std::runtime_error("Room nr " + std::to_string(room_nr)
                             + " is not empty!") {}
};
