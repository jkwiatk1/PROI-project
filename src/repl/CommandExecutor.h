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
    void updateNurse(Command &command, Errors &errors);
    void updateParamedic(Command &command, Errors &errors);
    void updateAssistant(Command &command, Errors &errors);
    void updateDepartment(Command &command, Errors &errors);
    void updateRoom(Command &command, Errors &errors);

    void searchPatient(Command &command, Errors &errors, Results &results);
    void searchDoctor(Command &command, Errors &errors, Results &results);
    void searchNurse(Command &command, Errors &errors, Results &results);
    void searchParamedic(Command &command, Errors &errors, Results &results);
    void searchDepartment(Command &command, Errors &errors, Results &results);
    void searchAssistant(Command &command, Errors &errors, Results &results);

    void examine(Command &command, Errors &errors);
    void prescribe(Command &command, Errors &errors);
    void administer(Command &command, Errors &errors);
    void surgery(Command &command, Errors &errors);
    void hospitalize(Command &command, Errors &errors);
    void assign_room(Command &command, Errors &errors);
    void discharge(Command &command, Errors &errors);

  public:
    CommandExecutor(DataContainer &container) : data_container(container)
    {
    }
    std::pair<Results, Errors> executeCommand(Command &command);
};
