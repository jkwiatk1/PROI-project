#include "CommandExecutor.h"


// TODO: implement fully
void CommandExecutor::executeCommand(Command &command)
{
    if (command.getType() == Command::ADD_COMMAND) {
        auto patient = command.getObject(0);
        auto first_name = patient.getProperty(CommandObject::FIRST_NAME);
        auto last_name = patient.getProperty(CommandObject::LAST_NAME);
        data_container.addPatient(first_name, last_name);
    }
}
