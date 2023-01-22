#include <iostream>

#include <antlr4-runtime.h>
#include "CommandObject.h"
#include "Repl.h"
#include "ReplCommandsParser.h"
#include "TreeVisitor.h"
#include "Command.h"


std::any
TreeVisitor::visitCommandLine(ReplCommandsParser::CommandLineContext *ctx)
{
    return visit(ctx->command());
}

std::any
TreeVisitor::visitAddCommand(ReplCommandsParser::AddCommandContext *ctx)
{
    Command command(Command::ADD_COMMAND);
    command.addObject(std::any_cast<CommandObject>(visitObject(ctx->object())));
    return command;
}

std::any
TreeVisitor::visitDeleteCommand(ReplCommandsParser::DeleteCommandContext *ctx)
{
    Command command(Command::DELETE_COMMAND);
    command.addObject(std::any_cast<CommandObject>(visitObject(ctx->object())));
    return command;
}

std::any
TreeVisitor::visitUpdateCommand(ReplCommandsParser::UpdateCommandContext *ctx)
{
    Command command(Command::UPDATE_COMMAND);
    command.addObject(std::any_cast<CommandObject>(visitObject(ctx->object())));
    return command;
}

std::any
TreeVisitor::visitExamineCommand(ReplCommandsParser::ExamineCommandContext *ctx)
{
    Command command(Command::EXAMINE_COMMAND);
    command.addObject(
        std::any_cast<CommandObject>(visitObject(ctx->object(0))));
    command.addObject(
        std::any_cast<CommandObject>(visitObject(ctx->object(1))));
    return command;
}

std::any TreeVisitor::visitPrescribeCommand(
    ReplCommandsParser::PrescribeCommandContext *ctx)
{
    Command command(Command::PRESCRIBE_COMMAND);
    command.addObject(
        std::any_cast<CommandObject>(visitObject(ctx->object(0))));
    command.addObject(
        std::any_cast<CommandObject>(visitObject(ctx->object(1))));
    command.addArray(
        std::any_cast<std::vector<std::string>>(visitMedlist(ctx->medlist())));
    return command;
}

std::any TreeVisitor::visitAdministerCommand(
    ReplCommandsParser::AdministerCommandContext *ctx)
{
    Command command(Command::ADMINISTER_COMMAND);
    command.addObject(
        std::any_cast<CommandObject>(visitObject(ctx->object(0))));
    command.addObject(
        std::any_cast<CommandObject>(visitObject(ctx->object(1))));
    command.addKeyval(Command::MEDICINE, ctx->ID()->getText());
    return command;
}

std::any
TreeVisitor::visitSurgeryCommand(ReplCommandsParser::SurgeryCommandContext *ctx)
{
    Command command(Command::SURGERY_COMMAND);
    command.addObject(
        std::any_cast<CommandObject>(visitObject(ctx->object(0))));
    command.addObject(
        std::any_cast<CommandObject>(visitObject(ctx->object(1))));
    return command;
}

std::any TreeVisitor::visitHospitalizeCommand(
    ReplCommandsParser::HospitalizeCommandContext *ctx)
{
    Command command(Command::HOSPITALIZE_COMMAND);
    command.addObject(
        std::any_cast<CommandObject>(visitObject(ctx->object(0))));
    command.addObject(
        std::any_cast<CommandObject>(visitObject(ctx->object(1))));
    command.addKeyval(Command::REASON, ctx->STRING()->getText());
    return command;
}

std::any TreeVisitor::visitAssignRoomCommand(
    ReplCommandsParser::AssignRoomCommandContext *ctx)
{
    Command command(Command::ASSIGN_ROOM_COMMAND);
    command.addObject(
        std::any_cast<CommandObject>(visitObject(ctx->object(0))));
    command.addObject(
        std::any_cast<CommandObject>(visitObject(ctx->object(1))));
    command.addKeyval(Command::ROOM_NO, ctx->INT()->getText());
    return command;
}

std::any TreeVisitor::visitDischargeCommand(
    ReplCommandsParser::DischargeCommandContext *ctx)
{
    Command command(Command::DISCHARGE_COMMAND);
    command.addObject(
        std::any_cast<CommandObject>(visitObject(ctx->object(0))));
    command.addObject(
        std::any_cast<CommandObject>(visitObject(ctx->object(1))));
    return command;
}

std::any
TreeVisitor::visitSearchCommand(ReplCommandsParser::SearchCommandContext *ctx)
{
    Command command(Command::SEARCH_COMMAND);
    command.addObject(std::any_cast<CommandObject>(visitObject(ctx->object())));
    return command;
}


std::any TreeVisitor::visitObject(ReplCommandsParser::ObjectContext *ctx)
{
    CommandObject object;
    object.setType(ctx->ID()->getText());
    auto properties = ctx->properties();
    if (properties != nullptr) {
        for (auto kv : properties->keyval()) {
            auto k = kv->ID()->getText();
            auto v = kv->val()->getText();
            object.addProperty(k, v);
        }
    }
    return object;
}

std::any TreeVisitor::visitMedlist(ReplCommandsParser::MedlistContext *ctx)
{
    std::vector<std::string> meds;
    for (auto med : ctx->ID()) {
        meds.push_back(med->getText());
    }
    return meds;
}
