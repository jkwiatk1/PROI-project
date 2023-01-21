#include <iostream>

#include <antlr4-runtime.h>
#include "CommandObject.h"
#include "Repl.h"
#include "ReplCommandsParser.h"
#include "TreeVisitor.h"
#include "Command.h"


std::any TreeVisitor::visitCommandLine(ReplCommandsParser::CommandLineContext *ctx) {
    return visit(ctx->command());
}

std::any TreeVisitor::visitAddCommand(ReplCommandsParser::AddCommandContext *ctx) {
    Command command;
    command.setType(Command::ADD_COMMAND);
    auto object = std::any_cast<CommandObject>(visitObject(ctx->object()));
    command.addObject(object);
    return command;
}

std::any TreeVisitor::visitObject(ReplCommandsParser::ObjectContext *ctx) {
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
