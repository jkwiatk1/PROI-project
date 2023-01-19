#pragma once

#include <map>
#include <ostream>
#include <string>
#include <vector>

#include "CommandObject.h"

class Command
{
  public:
    void setType(std::string type);
    void addObject(CommandObject &o);
    void addArray(std::vector<std::string> &a);
    int objectCount(void) const;
    int arrayCount(void) const;
    CommandObject getObject(int i) const;
    std::vector<std::string> getArray(int i) const;
    std::string getType(void) const;
    friend std::ostream &operator<<(std::ostream &o, const Command &c);

    static const std::string ADD_COMMAND;
    static const std::string DELETE_COMMAND;
    static const std::string UPDATE_COMMAND;
    static const std::string SEARCH_COMMAND;
    static const std::string EXAMINE_COMMAND;
    static const std::string PRESCRIBE_COMMAND;
    static const std::string ADMINISTER_COMMAND;
    static const std::string SURGERY_COMMAND;
    static const std::string HOSPITALIZE_COMMAND;
    static const std::string DISCHARGE_COMMAND;

  private:
    std::string type;
    std::vector<CommandObject> objects;
    std::vector<std::vector<std::string>> arrays;
};
