#include "Errors.h"

void Errors::addError(std::string error)
{
    error_messages.push_back(error);
}

std::vector<std::string> Errors::getErrors(void)
{
    return error_messages;
}

bool Errors::exist(void)
{
    return error_messages.size() > 0;
}

std::vector<std::string>::iterator Errors::begin(void)
{
    return error_messages.begin();
}

std::vector<std::string>::iterator Errors::end(void)
{
    return error_messages.end();
}
