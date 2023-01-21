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
    virtual std::any visitAddCommand(ReplCommandsParser::AddCommandContext *ctx) override;
    virtual std::any visitCommandLine(ReplCommandsParser::CommandLineContext *ctx) override;
    virtual std::any visitObject(ReplCommandsParser::ObjectContext *ctx) override;
};
