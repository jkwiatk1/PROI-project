
// Generated from ReplCommands.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  ReplCommandsParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, LF = 20, 
    ID = 21, INT = 22, FLOAT = 23, STRING = 24, WS = 25
  };

  enum {
    RuleCommandLine = 0, RuleCommand = 1, RuleObject = 2, RuleProperties = 3, 
    RuleKeyval = 4, RuleVal = 5, RuleMedlist = 6
  };

  explicit ReplCommandsParser(antlr4::TokenStream *input);

  ReplCommandsParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~ReplCommandsParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class CommandLineContext;
  class CommandContext;
  class ObjectContext;
  class PropertiesContext;
  class KeyvalContext;
  class ValContext;
  class MedlistContext; 

  class  CommandLineContext : public antlr4::ParserRuleContext {
  public:
    CommandLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommandContext *command();
    antlr4::tree::TerminalNode *LF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommandLineContext* commandLine();

  class  CommandContext : public antlr4::ParserRuleContext {
  public:
    CommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CommandContext() = default;
    void copyFrom(CommandContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DeleteCommandContext : public CommandContext {
  public:
    DeleteCommandContext(CommandContext *ctx);

    ObjectContext *object();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HospitalizeCommandContext : public CommandContext {
  public:
    HospitalizeCommandContext(CommandContext *ctx);

    std::vector<ObjectContext *> object();
    ObjectContext* object(size_t i);
    antlr4::tree::TerminalNode *STRING();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DischargeCommandContext : public CommandContext {
  public:
    DischargeCommandContext(CommandContext *ctx);

    std::vector<ObjectContext *> object();
    ObjectContext* object(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SurgeryCommandContext : public CommandContext {
  public:
    SurgeryCommandContext(CommandContext *ctx);

    std::vector<ObjectContext *> object();
    ObjectContext* object(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddCommandContext : public CommandContext {
  public:
    AddCommandContext(CommandContext *ctx);

    ObjectContext *object();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UpdateCommandContext : public CommandContext {
  public:
    UpdateCommandContext(CommandContext *ctx);

    ObjectContext *object();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrescribeCommandContext : public CommandContext {
  public:
    PrescribeCommandContext(CommandContext *ctx);

    std::vector<ObjectContext *> object();
    ObjectContext* object(size_t i);
    MedlistContext *medlist();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExamineCommandContext : public CommandContext {
  public:
    ExamineCommandContext(CommandContext *ctx);

    std::vector<ObjectContext *> object();
    ObjectContext* object(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignRoomCommandContext : public CommandContext {
  public:
    AssignRoomCommandContext(CommandContext *ctx);

    std::vector<ObjectContext *> object();
    ObjectContext* object(size_t i);
    antlr4::tree::TerminalNode *INT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AdministerCommandContext : public CommandContext {
  public:
    AdministerCommandContext(CommandContext *ctx);

    std::vector<ObjectContext *> object();
    ObjectContext* object(size_t i);
    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SearchCommandContext : public CommandContext {
  public:
    SearchCommandContext(CommandContext *ctx);

    ObjectContext *object();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CommandContext* command();

  class  ObjectContext : public antlr4::ParserRuleContext {
  public:
    ObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    PropertiesContext *properties();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectContext* object();

  class  PropertiesContext : public antlr4::ParserRuleContext {
  public:
    PropertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<KeyvalContext *> keyval();
    KeyvalContext* keyval(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropertiesContext* properties();

  class  KeyvalContext : public antlr4::ParserRuleContext {
  public:
    KeyvalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    ValContext *val();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyvalContext* keyval();

  class  ValContext : public antlr4::ParserRuleContext {
  public:
    ValContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValContext* val();

  class  MedlistContext : public antlr4::ParserRuleContext {
  public:
    MedlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MedlistContext* medlist();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

