#pragma once

#include <antlr4-runtime.h>
#include <map>
#include <string>

#include "Repl.h"
#include "ReplCommandsBaseListener.h"
#include "Command.h"

class TreeListener : public ReplCommandsBaseListener
{
  private:
     Command command;

  public:
    void enterAddCommand(ReplCommandsParser::AddCommandContext * /*ctx*/) override;
    // void enterDeleteCommand(ReplCommandsParser::DeleteCommandContext * /*ctx*/) override;
    // void enterUpdateCommand(ReplCommandsParser::UpdateCommandContext * /*ctx*/) override;
    // void enterSearchCommand(ReplCommandsParser::SearchCommandContext * /*ctx*/) override;
    // void enterExamineCommand(ReplCommandsParser::ExamineCommandContext * /*ctx*/) override;
    // void enterPrescribeCommand(ReplCommandsParser::PrescribeCommandContext * /*ctx*/) override;
    // void enterAdministerCommand(ReplCommandsParser::AdministerCommandContext * /*ctx*/) override;
    // void enterSurgeryCommand(ReplCommandsParser::SurgeryCommandContext * /*ctx*/) override;
    // void enterHospitalizeCommand(ReplCommandsParser::HospitalizeCommandContext * /*ctx*/) override;
    // void enterDischargeCommand(ReplCommandsParser::DischargeCommandContext * /*ctx*/) override;
    Command getCommand(void) const;
};
