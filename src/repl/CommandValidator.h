#pragma once

#include "Command.h"
#include "Errors.h"

class CommandValidator
{
  public:
    static Errors validate(Command &command);

  private:
    static void has_first_name_and_last_name(CommandObject &object,
                                             Errors &errors);
    static void has_id(CommandObject &object, Errors &errors);
    static void has_property(CommandObject &object, std::string property,
                             Errors &errors);
    static void is_int(CommandObject &object, std::string property,
                       Errors &errors);
    static void is_doctor_speciality(CommandObject &object,
                                     std::string property, Errors &errors);
    static void has_any(CommandObject &object,
                        std::vector<std::string> properties, Errors &errors);

    static void validate_add(Command &command, Errors &errors);
    static void validate_delete(Command &command, Errors &errors);
    static void validate_update(Command &command, Errors &errors);
    static void validate_search(Command &command, Errors &errors);

    static void validate_examine(Command &command, Errors &errors);
    static void validate_prescribe(Command &command, Errors &errors);
    static void validate_administer(Command &command, Errors &errors);
    static void validate_surgery(Command &command, Errors &errors);
};
