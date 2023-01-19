#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "Command.h"


const std::string Command::ADD_COMMAND = "add";
const std::string Command::DELETE_COMMAND = "delete";
const std::string Command::UPDATE_COMMAND = "modify";
const std::string Command::SEARCH_COMMAND = "search";
const std::string Command::EXAMINE_COMMAND = "examine";
const std::string Command::PRESCRIBE_COMMAND = "prescribe";
const std::string Command::ADMINISTER_COMMAND = "asminister";
const std::string Command::SURGERY_COMMAND = "surgery";
const std::string Command::HOSPITALIZE_COMMAND = "hospitalize";
const std::string Command::DISCHARGE_COMMAND = "discharge";


void Command::setType(std::string type)
{
    this->type = type;
}

void Command::addObject(CommandObject &o)
{
    objects.push_back(o);
}

void Command::addArray(std::vector<std::string> &a)
{
    arrays.push_back(a);
}

int Command::objectCount(void) const
{
    return objects.size();
}

int Command::arrayCount(void) const
{
    return arrays.size();
}

CommandObject Command::getObject(int i) const
{
    return objects[i];
}

std::vector<std::string> Command::getArray(int i) const
{
    return arrays[i];
}

std::string Command::getType(void) const
{
    return type;
}

std::ostream &operator<<(std::ostream &s, const std::vector<std::string> v)
{
    s << "[";
    bool first_iteration = true;
    for (auto x : v) {
        if (!first_iteration)
            s << ", ";
        s << x;
        if (first_iteration)
            first_iteration = false;
    }
    return s << "]";
}

std::ostream &operator<<(std::ostream &s, const Command &command)
{
    s << "Command{" << std::endl;
    for (int i = 0; i < command.objectCount(); i++) {
        s << "\t" << command.getObject(i) << std::endl;
    }
    for (int i = 0; i < command.arrayCount(); i++) {
        s << "\tCommandArray{" << command.getArray(i) << "}" << std::endl;
    }
    s << "}" << std::endl;
    return s;
}
