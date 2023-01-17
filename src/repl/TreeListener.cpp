#include <iostream>

#include <antlr4-runtime.h>
#include "Repl.h"
#include "ReplCommandsParser.h"
#include "TreeListener.h"


// TODO: finish implementing the following methods
void TreeListener::enterAddCommand(ReplCommandsParser::AddCommandContext *ctx)
{
    command[COMMAND_TYPE] = ADD_COMMAND;
}
void TreeListener::enterDeleteCommand(
    ReplCommandsParser::DeleteCommandContext *ctx)
{
    command[COMMAND_TYPE] = DELETE_COMMAND;
}
void TreeListener::enterUpdateCommand(
    ReplCommandsParser::UpdateCommandContext *ctx)
{
    command[COMMAND_TYPE] = UPDATE_COMMAND;
}
void TreeListener::enterSearchCommand(
    ReplCommandsParser::SearchCommandContext *ctx)
{
    command[COMMAND_TYPE] = SEARCH_COMMAND;
}
void TreeListener::enterExamineCommand(
    ReplCommandsParser::ExamineCommandContext *ctx)
{
    command[COMMAND_TYPE] = EXAMINE_COMMAND;
}
void TreeListener::enterPrescribeCommand(
    ReplCommandsParser::PrescribeCommandContext *ctx)
{
    command[COMMAND_TYPE] = PRESCRIBE_COMMAND;
}
void TreeListener::enterAdministerCommand(
    ReplCommandsParser::AdministerCommandContext *ctx)
{
    command[COMMAND_TYPE] = ADMINISTER_COMMAND;
}
void TreeListener::enterSurgeryCommand(
    ReplCommandsParser::SurgeryCommandContext *ctx)
{
    command[COMMAND_TYPE] = SURGERY_COMMAND;
}
void TreeListener::enterHospitalizeCommand(
    ReplCommandsParser::HospitalizeCommandContext *ctx)
{
    command[COMMAND_TYPE] = HOSPITALIZE_COMMAND;
}
void TreeListener::enterDischargeCommand(
    ReplCommandsParser::DischargeCommandContext *ctx)
{
    command[COMMAND_TYPE] = DISCHARGE_COMMAND;
}

Repl::CommandData TreeListener::getCommandData(void) const
{
    return command;
}
