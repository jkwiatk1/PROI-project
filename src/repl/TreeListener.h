#pragma once

#include <antlr4-runtime.h>
#include <map>
#include <string>

#include "Repl.h"
#include "ReplCommandsBaseListener.h"

class TreeListener : public ReplCommandsBaseListener
{
  private:
    std::map<std::string, std::string> command;

  public:
    const std::string COMMAND_TYPE = "command_type";
    const std::string ADD_COMMAND = "add";
    const std::string DELETE_COMMAND = "delete";
    const std::string UPDATE_COMMAND = "modify";
    const std::string SEARCH_COMMAND = "search";
    const std::string EXAMINE_COMMAND = "examine";
    const std::string PRESCRIBE_COMMAND = "prescribe";
    const std::string ADMINISTER_COMMAND = "asminister";
    const std::string SURGERY_COMMAND = "surgery";
    const std::string HOSPITALIZE_COMMAND = "hospitalize";
    const std::string DISCHARGE_COMMAND = "discharge";
    void enterAddCommand(ReplCommandsParser::AddCommandContext * /*ctx*/) override;
    void enterDeleteCommand(ReplCommandsParser::DeleteCommandContext * /*ctx*/) override;
    void enterUpdateCommand(ReplCommandsParser::UpdateCommandContext * /*ctx*/) override;
    void enterSearchCommand(ReplCommandsParser::SearchCommandContext * /*ctx*/) override;
    void enterExamineCommand(ReplCommandsParser::ExamineCommandContext * /*ctx*/) override;
    void enterPrescribeCommand(ReplCommandsParser::PrescribeCommandContext * /*ctx*/) override;
    void enterAdministerCommand(ReplCommandsParser::AdministerCommandContext * /*ctx*/) override;
    void enterSurgeryCommand(ReplCommandsParser::SurgeryCommandContext * /*ctx*/) override;
    void enterHospitalizeCommand(ReplCommandsParser::HospitalizeCommandContext * /*ctx*/) override;
    void enterDischargeCommand(ReplCommandsParser::DischargeCommandContext * /*ctx*/) override;
    Repl::CommandData getCommandData(void) const;
};
