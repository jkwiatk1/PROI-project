#pragma once

#include "Command.h"
#include "ValidationErrors.h"

class CommandValidator
{
  public:
    static ValidationErrors validate(Command &command);

  private:
    static void validate_add(Command &command, ValidationErrors &errors);
    static void has_first_name_last_name(CommandObject &object,
                                         ValidationErrors &errors);
    static void has_property(CommandObject &object, std::string property,
                             ValidationErrors &errors);
};
