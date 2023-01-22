#pragma once

#include "Command.h"
#include "DataContainer.h"
class CommandExecutor
{
  private:
    DataContainer &data_container;

    void addPatient(Command &command);
    void addDoctor(Command &command);
    void addNurse(Command &command);
    void addParamedic(Command &command);
    void addAssistant(Command &command);
    void addDepartment(Command &command);
    void addRoom(Command &command);

  public:
    CommandExecutor(DataContainer &container) : data_container(container)
    {
    }
    void executeCommand(Command &command);
};
