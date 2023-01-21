
// Generated from ReplCommands.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "ReplCommandsParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ReplCommandsParser.
 */
class  ReplCommandsListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCommandLine(ReplCommandsParser::CommandLineContext *ctx) = 0;
  virtual void exitCommandLine(ReplCommandsParser::CommandLineContext *ctx) = 0;

  virtual void enterCommand(ReplCommandsParser::CommandContext *ctx) = 0;
  virtual void exitCommand(ReplCommandsParser::CommandContext *ctx) = 0;

  virtual void enterAddCommand(ReplCommandsParser::AddCommandContext *ctx) = 0;
  virtual void exitAddCommand(ReplCommandsParser::AddCommandContext *ctx) = 0;

  virtual void enterDeleteCommand(ReplCommandsParser::DeleteCommandContext *ctx) = 0;
  virtual void exitDeleteCommand(ReplCommandsParser::DeleteCommandContext *ctx) = 0;

  virtual void enterUpdateCommand(ReplCommandsParser::UpdateCommandContext *ctx) = 0;
  virtual void exitUpdateCommand(ReplCommandsParser::UpdateCommandContext *ctx) = 0;

  virtual void enterExamineCommand(ReplCommandsParser::ExamineCommandContext *ctx) = 0;
  virtual void exitExamineCommand(ReplCommandsParser::ExamineCommandContext *ctx) = 0;

  virtual void enterPrescribeCommand(ReplCommandsParser::PrescribeCommandContext *ctx) = 0;
  virtual void exitPrescribeCommand(ReplCommandsParser::PrescribeCommandContext *ctx) = 0;

  virtual void enterAdministerCommand(ReplCommandsParser::AdministerCommandContext *ctx) = 0;
  virtual void exitAdministerCommand(ReplCommandsParser::AdministerCommandContext *ctx) = 0;

  virtual void enterSurgeryCommand(ReplCommandsParser::SurgeryCommandContext *ctx) = 0;
  virtual void exitSurgeryCommand(ReplCommandsParser::SurgeryCommandContext *ctx) = 0;

  virtual void enterHospitalizeCommand(ReplCommandsParser::HospitalizeCommandContext *ctx) = 0;
  virtual void exitHospitalizeCommand(ReplCommandsParser::HospitalizeCommandContext *ctx) = 0;

  virtual void enterDischargeCommand(ReplCommandsParser::DischargeCommandContext *ctx) = 0;
  virtual void exitDischargeCommand(ReplCommandsParser::DischargeCommandContext *ctx) = 0;

  virtual void enterSearchCommand(ReplCommandsParser::SearchCommandContext *ctx) = 0;
  virtual void exitSearchCommand(ReplCommandsParser::SearchCommandContext *ctx) = 0;

  virtual void enterObject(ReplCommandsParser::ObjectContext *ctx) = 0;
  virtual void exitObject(ReplCommandsParser::ObjectContext *ctx) = 0;

  virtual void enterKeyvals(ReplCommandsParser::KeyvalsContext *ctx) = 0;
  virtual void exitKeyvals(ReplCommandsParser::KeyvalsContext *ctx) = 0;

  virtual void enterKeyval(ReplCommandsParser::KeyvalContext *ctx) = 0;
  virtual void exitKeyval(ReplCommandsParser::KeyvalContext *ctx) = 0;

  virtual void enterVal(ReplCommandsParser::ValContext *ctx) = 0;
  virtual void exitVal(ReplCommandsParser::ValContext *ctx) = 0;

  virtual void enterMedlist(ReplCommandsParser::MedlistContext *ctx) = 0;
  virtual void exitMedlist(ReplCommandsParser::MedlistContext *ctx) = 0;


};

