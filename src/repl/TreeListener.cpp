#include <iostream>

#include <antlr4-runtime.h>
#include "CommandObject.h"
#include "Repl.h"
#include "ReplCommandsParser.h"
#include "TreeListener.h"
#include "Command.h"
#include "ReplConstants.h"


using namespace ReplConstants;

// TODO: finish implementing
void TreeListener::enterAddCommand(ReplCommandsParser::AddCommandContext *ctx)
{
    command.setType(ADD_COMMAND);
    auto object = ctx->object();
    CommandObject patient;
    patient.setType(object->ID()->getText());
    auto keyvals = object->keyvals();
    if (keyvals == 0)
        return;
    for (auto keyval : keyvals->keyval()) {
        auto key = keyval->ID()->getText();
        auto val = keyval->val()->getText();
        patient.addProperty(key, val);
    }
    command.addObject(patient);
}
// void TreeListener::enterDeleteCommand(
//     ReplCommandsParser::DeleteCommandContext *ctx)
// {
//     command.setCommandType(DELETE_COMMAND);
// }
// void TreeListener::enterUpdateCommand(
//     ReplCommandsParser::UpdateCommandContext *ctx)
// {
//     command.setCommandType(UPDATE_COMMAND);
// }
// void TreeListener::enterSearchCommand(
//     ReplCommandsParser::SearchCommandContext *ctx)
// {
//     command.setCommandType(SEARCH_COMMAND);
// }
// void TreeListener::enterExamineCommand(
//     ReplCommandsParser::ExamineCommandContext *ctx)
// {
//     command.setCommandType(EXAMINE_COMMAND);
// }
// void TreeListener::enterPrescribeCommand(
//     ReplCommandsParser::PrescribeCommandContext *ctx)
// {
//     command.setCommandType(PRESCRIBE_COMMAND);
// }
// void TreeListener::enterAdministerCommand(
//     ReplCommandsParser::AdministerCommandContext *ctx)
// {
//     command.setCommandType(ADMINISTER_COMMAND);
// }
// void TreeListener::enterSurgeryCommand(
//     ReplCommandsParser::SurgeryCommandContext *ctx)
// {
//     command.setCommandType(SURGERY_COMMAND);
// }
// void TreeListener::enterHospitalizeCommand(
//     ReplCommandsParser::HospitalizeCommandContext *ctx)
// {
//     command.setCommandType(HOSPITALIZE_COMMAND);
// }
// void TreeListener::enterDischargeCommand(
//     ReplCommandsParser::DischargeCommandContext *ctx)
// {
//     command.setCommandType(DISCHARGE_COMMAND);
// }

Command TreeListener::getCommand(void) const
{
    return command;
}
