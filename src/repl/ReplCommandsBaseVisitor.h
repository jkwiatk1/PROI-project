
// Generated from ReplCommands.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "ReplCommandsVisitor.h"


/**
 * This class provides an empty implementation of ReplCommandsVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ReplCommandsBaseVisitor : public ReplCommandsVisitor {
public:

  virtual std::any visitCommandLine(ReplCommandsParser::CommandLineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddCommand(ReplCommandsParser::AddCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeleteCommand(ReplCommandsParser::DeleteCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdateCommand(ReplCommandsParser::UpdateCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExamineCommand(ReplCommandsParser::ExamineCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrescribeCommand(ReplCommandsParser::PrescribeCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdministerCommand(ReplCommandsParser::AdministerCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSurgeryCommand(ReplCommandsParser::SurgeryCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHospitalizeCommand(ReplCommandsParser::HospitalizeCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignRoomCommand(ReplCommandsParser::AssignRoomCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDischargeCommand(ReplCommandsParser::DischargeCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearchCommand(ReplCommandsParser::SearchCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObject(ReplCommandsParser::ObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProperties(ReplCommandsParser::PropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKeyval(ReplCommandsParser::KeyvalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVal(ReplCommandsParser::ValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMedlist(ReplCommandsParser::MedlistContext *ctx) override {
    return visitChildren(ctx);
  }


};

