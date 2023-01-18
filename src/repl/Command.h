#pragma once

#include <map>
#include <ostream>
#include <string>
#include <vector>

class Command
{
  public:
    void setCommandType(std::string type);
    void addProperty(std::string key, std::string value);
    void addObjectProperty(std::string object_tag, std::string key,
                           std::string value);
    void setObjectType(std::string object_tag, std::string type);
    std::string getCommandType(void) const;
    std::string getProperty(std::string key) const;
    std::map<std::string, std::string> getObject(std::string object_tag) const;
    friend std::ostream &operator<<(std::ostream &s, const Command command);

  private:
    std::map<std::string, std::string> properties;
};
