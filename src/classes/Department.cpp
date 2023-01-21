#include "headers/Department.h"

using namespace std;

Department::Department(string name) {
    this->name = name;
    rooms = vector<Room>();
}

void Department::addRoom(Room room) {
    rooms.push_back(room);
}