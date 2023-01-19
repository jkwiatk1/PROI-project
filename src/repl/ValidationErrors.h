#pragma once

#include <vector>
#include <string>

class ValidationErrors {
    public:
        void addError(std::string error);
        std::vector<std::string> getErrors(void);
        bool exist(void);
        std::vector<std::string>::iterator begin(void);
        std::vector<std::string>::iterator end(void);


    private:
        std::vector<std::string> error_messages;
};
