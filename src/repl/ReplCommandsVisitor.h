
// Generated from ReplCommands.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "ReplCommandsParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ReplCommandsParser.
 */
class  ReplCommandsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ReplCommandsParser.
   */
    virtual std::any visitCommandLine(ReplCommandsParser::CommandLineContext *context) = 0;

    virtual std::any visitAddCommand(ReplCommandsParser::AddCommandContext *context) = 0;

    virtual std::any visitDeleteCommand(ReplCommandsParser::DeleteCommandContext *context) = 0;

    virtual std::any visitUpdateCommand(ReplCommandsParser::UpdateCommandContext *context) = 0;

    virtual std::any visitExamineCommand(ReplCommandsParser::ExamineCommandContext *context) = 0;

    virtual std::any visitPrescribeCommand(ReplCommandsParser::PrescribeCommandContext *context) = 0;

    virtual std::any visitAdministerCommand(ReplCommandsParser::AdministerCommandContext *context) = 0;

    virtual std::any visitSurgeryCommand(ReplCommandsParser::SurgeryCommandContext *context) = 0;

    virtual std::any visitHospitalizeCommand(ReplCommandsParser::HospitalizeCommandContext *context) = 0;

    virtual std::any visitAssignRoomCommand(ReplCommandsParser::AssignRoomCommandContext *context) = 0;

    virtual std::any visitDischargeCommand(ReplCommandsParser::DischargeCommandContext *context) = 0;

    virtual std::any visitSearchCommand(ReplCommandsParser::SearchCommandContext *context) = 0;

    virtual std::any visitObject(ReplCommandsParser::ObjectContext *context) = 0;

    virtual std::any visitProperties(ReplCommandsParser::PropertiesContext *context) = 0;

    virtual std::any visitKeyval(ReplCommandsParser::KeyvalContext *context) = 0;

    virtual std::any visitVal(ReplCommandsParser::ValContext *context) = 0;

    virtual std::any visitMedlist(ReplCommandsParser::MedlistContext *context) = 0;


};

