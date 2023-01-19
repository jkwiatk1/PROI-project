#pragma once

#include "Command.h"
#include "DataContainer.h"
class CommandExecutor
{
  private:
    DataContainer &data_container;

  public:
    CommandExecutor(DataContainer &container) : data_container(container)
    {
    }
    void executeCommand(Command &command);
};
