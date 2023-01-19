#pragma once

#include <map>
#include <string>

class CommandObject
{
  public:
      void setType(std::string type);
      void addProperty(std::string key, std::string value);
      std::string getType(void) const;
      std::string getProperty(std::string key) const;
      bool hasProperty(std::string key) const;

    private:
      std::map<std::string, std::string> properties;
      std::string type;
};
