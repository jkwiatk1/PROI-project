#include "ValidationErrors.h"

void ValidationErrors::addError(std::string error)
{
    error_messages.push_back(error);
}

std::vector<std::string> ValidationErrors::getErrors(void)
{
    return error_messages;
}

bool ValidationErrors::exist(void)
{
    return error_messages.size() > 0;
}

std::vector<std::string>::iterator ValidationErrors::begin(void)
{
    return error_messages.begin();
}

std::vector<std::string>::iterator ValidationErrors::end(void)
{
    return error_messages.end();
}
