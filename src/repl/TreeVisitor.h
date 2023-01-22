#pragma once

#include <antlr4-runtime.h>
#include <map>
#include <string>

#include "Repl.h"
#include "ReplCommandsBaseVisitor.h"
#include "Command.h"

// TODO: replace this with a Visitor
class TreeVisitor : public ReplCommandsBaseVisitor
{
  public:
    virtual std::any visitCommandLine(ReplCommandsParser::CommandLineContext *ctx) override;
    virtual std::any visitObject(ReplCommandsParser::ObjectContext *ctx) override;

    virtual std::any visitAddCommand(ReplCommandsParser::AddCommandContext *ctx) override;
    virtual std::any visitDeleteCommand(ReplCommandsParser::DeleteCommandContext *ctx) override;
    virtual std::any visitUpdateCommand(ReplCommandsParser::UpdateCommandContext *ctx) override;
    virtual std::any visitPrescribeCommand(ReplCommandsParser::PrescribeCommandContext *ctx) override;
    virtual std::any visitAdministerCommand(ReplCommandsParser::AdministerCommandContext *ctx) override;
    virtual std::any visitSurgeryCommand(ReplCommandsParser::SurgeryCommandContext *ctx) override;
    virtual std::any visitHospitalizeCommand(ReplCommandsParser::HospitalizeCommandContext *ctx) override;
    virtual std::any visitAssignRoomCommand(ReplCommandsParser::AssignRoomCommandContext *ctx) override;
    virtual std::any visitDischargeCommand(ReplCommandsParser::DischargeCommandContext *ctx) override;
    virtual std::any visitSearchCommand(ReplCommandsParser::SearchCommandContext *ctx) override;
    virtual std::any visitExamineCommand(ReplCommandsParser::ExamineCommandContext *ctx) override;
    virtual std::any visitMedlist(ReplCommandsParser::MedlistContext *ctx) override;
};
