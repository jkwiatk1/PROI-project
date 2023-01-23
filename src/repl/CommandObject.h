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

    // Type constants
    static const std::string PATIENT;
    static const std::string DOCTOR;
    static const std::string NURSE;
    static const std::string PARAMEDIC;
    static const std::string ASSISTANT;
    static const std::string DEPARTMENT;
    static const std::string ROOM;

    // Fields constants
    static const std::string FIRST_NAME;
    static const std::string LAST_NAME;
    static const std::string SPECIALITY;
    static const std::string DEPARTMENT_NAME;
    static const std::string DEPARTMENT_NAME2;
    static const std::string ROOM_NO;
    static const std::string CAPACITY;
    static const std::string ID;
    static const std::string DEPARTMENT_NEW_NAME;
    static const std::string ROOM_NEW_NO;
    static const std::string SHOW_CARD;

  private:
    std::map<std::string, std::string> properties;
    std::string type;
    friend std::ostream &operator<<(std::ostream &, const CommandObject &);
};
