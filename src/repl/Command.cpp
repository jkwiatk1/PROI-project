#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "Command.h"
#include "ReplConstants.h"

using ReplConstants::COMMAND_TYPE, ReplConstants::OBJECT_TYPE;

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
