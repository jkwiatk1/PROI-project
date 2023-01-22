#pragma once

#include "Command.h"
#include "DataContainer.h"
#include "Errors.h"
class CommandExecutor
{
  private:
    DataContainer &data_container;

    void addPatient(Command &command);
    void addDoctor(Command &command);
    void addNurse(Command &command);
    void addParamedic(Command &command);
    void addAssistant(Command &command);
    Errors addDepartment(Command &command);
    Errors addRoom(Command &command);

  public:
    CommandExecutor(DataContainer &container) : data_container(container)
    {
    }
    Errors executeCommand(Command &command);
};
