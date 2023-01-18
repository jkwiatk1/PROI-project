#pragma once

#include "Command.h"
class CommandValidator {
    public:
        static bool is_valid(Command &command);
    private:
        static bool validate_add(Command &command);
};
