#pragma once

#include "Command.h"
#include "Errors.h"

class CommandValidator
{
  public:
    static Errors validate(Command &command);

  private:
    static void validate_add(Command &command, Errors &errors);
    static void has_first_name_and_last_name(CommandObject &object,
                                             Errors &errors);
    static void has_property(CommandObject &object, std::string property,
                             Errors &errors);
    static void is_int(CommandObject &object, std::string property,
                       Errors &errors);
};
