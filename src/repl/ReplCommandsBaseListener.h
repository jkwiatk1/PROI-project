
// Generated from ReplCommands.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "ReplCommandsListener.h"


/**
 * This class provides an empty implementation of ReplCommandsListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ReplCommandsBaseListener : public ReplCommandsListener {
public:

  virtual void enterCommandLine(ReplCommandsParser::CommandLineContext * /*ctx*/) override { }
  virtual void exitCommandLine(ReplCommandsParser::CommandLineContext * /*ctx*/) override { }

  virtual void enterCommand(ReplCommandsParser::CommandContext * /*ctx*/) override { }
  virtual void exitCommand(ReplCommandsParser::CommandContext * /*ctx*/) override { }

  virtual void enterAddCommand(ReplCommandsParser::AddCommandContext * /*ctx*/) override { }
  virtual void exitAddCommand(ReplCommandsParser::AddCommandContext * /*ctx*/) override { }

  virtual void enterDeleteCommand(ReplCommandsParser::DeleteCommandContext * /*ctx*/) override { }
  virtual void exitDeleteCommand(ReplCommandsParser::DeleteCommandContext * /*ctx*/) override { }

  virtual void enterUpdateCommand(ReplCommandsParser::UpdateCommandContext * /*ctx*/) override { }
  virtual void exitUpdateCommand(ReplCommandsParser::UpdateCommandContext * /*ctx*/) override { }

  virtual void enterExamineCommand(ReplCommandsParser::ExamineCommandContext * /*ctx*/) override { }
  virtual void exitExamineCommand(ReplCommandsParser::ExamineCommandContext * /*ctx*/) override { }

  virtual void enterPrescribeCommand(ReplCommandsParser::PrescribeCommandContext * /*ctx*/) override { }
  virtual void exitPrescribeCommand(ReplCommandsParser::PrescribeCommandContext * /*ctx*/) override { }

  virtual void enterAdministerCommand(ReplCommandsParser::AdministerCommandContext * /*ctx*/) override { }
  virtual void exitAdministerCommand(ReplCommandsParser::AdministerCommandContext * /*ctx*/) override { }

  virtual void enterSurgeryCommand(ReplCommandsParser::SurgeryCommandContext * /*ctx*/) override { }
  virtual void exitSurgeryCommand(ReplCommandsParser::SurgeryCommandContext * /*ctx*/) override { }

  virtual void enterHospitalizeCommand(ReplCommandsParser::HospitalizeCommandContext * /*ctx*/) override { }
  virtual void exitHospitalizeCommand(ReplCommandsParser::HospitalizeCommandContext * /*ctx*/) override { }

  virtual void enterDischargeCommand(ReplCommandsParser::DischargeCommandContext * /*ctx*/) override { }
  virtual void exitDischargeCommand(ReplCommandsParser::DischargeCommandContext * /*ctx*/) override { }

  virtual void enterSearchCommand(ReplCommandsParser::SearchCommandContext * /*ctx*/) override { }
  virtual void exitSearchCommand(ReplCommandsParser::SearchCommandContext * /*ctx*/) override { }

  virtual void enterObject(ReplCommandsParser::ObjectContext * /*ctx*/) override { }
  virtual void exitObject(ReplCommandsParser::ObjectContext * /*ctx*/) override { }

  virtual void enterKeyvals(ReplCommandsParser::KeyvalsContext * /*ctx*/) override { }
  virtual void exitKeyvals(ReplCommandsParser::KeyvalsContext * /*ctx*/) override { }

  virtual void enterKeyval(ReplCommandsParser::KeyvalContext * /*ctx*/) override { }
  virtual void exitKeyval(ReplCommandsParser::KeyvalContext * /*ctx*/) override { }

  virtual void enterVal(ReplCommandsParser::ValContext * /*ctx*/) override { }
  virtual void exitVal(ReplCommandsParser::ValContext * /*ctx*/) override { }

  virtual void enterMedlist(ReplCommandsParser::MedlistContext * /*ctx*/) override { }
  virtual void exitMedlist(ReplCommandsParser::MedlistContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

