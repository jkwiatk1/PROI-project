#pragma once

#include <utility>
#include "Command.h"
#include "DataContainer.h"
#include "Errors.h"
#include "Results.h"

class CommandExecutor
{
  private:
    DataContainer &data_container;

    void addDoctor(Command &command, Errors &errors);
    void addDepartment(Command &command, Errors &errors);
    void addRoom(Command &command, Errors &errors);
    void addPerson(Command &command,
                   void (DataContainer::*f)(std::string first_name,
                                            std::string last_name),
                   Errors &errors);

    void deletePerson(Command &command, void (DataContainer::*f)(int),
                      std::string object_type, Errors &errors);
    void deleteDepartment(Command &command, Errors &errors);
    void deleteRoom(Command &command, Errors &errors);
    void updatePatient(Command &command, Errors &errors);
    void updateDoctor(Command &command, Errors &errors);
    void searchPatient(Command &command, Errors &errors, Results &results);
    void searchDepartment(Command &command, Errors &errors, Results &results);
    void searchDoctor(Command &command, Errors &errors, Results &results);

  public:
    CommandExecutor(DataContainer &container) : data_container(container)
    {
    }
    std::pair<Results, Errors> executeCommand(Command &command);
};
