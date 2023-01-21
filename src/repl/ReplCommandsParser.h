
// Generated from ReplCommands.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  ReplCommandsParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, LF = 17, ID = 18, INT = 19, FLOAT = 20, WS = 21
  };

  enum {
    RuleCommandLine = 0, RuleCommand = 1, RuleAddCommand = 2, RuleDeleteCommand = 3, 
    RuleUpdateCommand = 4, RuleExamineCommand = 5, RulePrescribeCommand = 6, 
    RuleAdministerCommand = 7, RuleSurgeryCommand = 8, RuleHospitalizeCommand = 9, 
    RuleDischargeCommand = 10, RuleSearchCommand = 11, RuleObject = 12, 
    RuleKeyvals = 13, RuleKeyval = 14, RuleVal = 15, RuleMedlist = 16
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
  class AddCommandContext;
  class DeleteCommandContext;
  class UpdateCommandContext;
  class ExamineCommandContext;
  class PrescribeCommandContext;
  class AdministerCommandContext;
  class SurgeryCommandContext;
  class HospitalizeCommandContext;
  class DischargeCommandContext;
  class SearchCommandContext;
  class ObjectContext;
  class KeyvalsContext;
  class KeyvalContext;
  class ValContext;
  class MedlistContext; 

  class  CommandLineContext : public antlr4::ParserRuleContext {
  public:
    CommandLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommandContext *command();
    antlr4::tree::TerminalNode *LF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommandLineContext* commandLine();

  class  CommandContext : public antlr4::ParserRuleContext {
  public:
    CommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddCommandContext *addCommand();
    DeleteCommandContext *deleteCommand();
    UpdateCommandContext *updateCommand();
    ExamineCommandContext *examineCommand();
    PrescribeCommandContext *prescribeCommand();
    AdministerCommandContext *administerCommand();
    SurgeryCommandContext *surgeryCommand();
    HospitalizeCommandContext *hospitalizeCommand();
    DischargeCommandContext *dischargeCommand();
    SearchCommandContext *searchCommand();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommandContext* command();

  class  AddCommandContext : public antlr4::ParserRuleContext {
  public:
    AddCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectContext *object();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddCommandContext* addCommand();

  class  DeleteCommandContext : public antlr4::ParserRuleContext {
  public:
    DeleteCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectContext *object();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeleteCommandContext* deleteCommand();

  class  UpdateCommandContext : public antlr4::ParserRuleContext {
  public:
    UpdateCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectContext *object();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UpdateCommandContext* updateCommand();

  class  ExamineCommandContext : public antlr4::ParserRuleContext {
  public:
    ExamineCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ObjectContext *> object();
    ObjectContext* object(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExamineCommandContext* examineCommand();

  class  PrescribeCommandContext : public antlr4::ParserRuleContext {
  public:
    PrescribeCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ObjectContext *> object();
    ObjectContext* object(size_t i);
    MedlistContext *medlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrescribeCommandContext* prescribeCommand();

  class  AdministerCommandContext : public antlr4::ParserRuleContext {
  public:
    AdministerCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ObjectContext *> object();
    ObjectContext* object(size_t i);
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AdministerCommandContext* administerCommand();

  class  SurgeryCommandContext : public antlr4::ParserRuleContext {
  public:
    SurgeryCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ObjectContext *> object();
    ObjectContext* object(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SurgeryCommandContext* surgeryCommand();

  class  HospitalizeCommandContext : public antlr4::ParserRuleContext {
  public:
    HospitalizeCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectContext *object();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HospitalizeCommandContext* hospitalizeCommand();

  class  DischargeCommandContext : public antlr4::ParserRuleContext {
  public:
    DischargeCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectContext *object();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DischargeCommandContext* dischargeCommand();

  class  SearchCommandContext : public antlr4::ParserRuleContext {
  public:
    SearchCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectContext *object();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SearchCommandContext* searchCommand();

  class  ObjectContext : public antlr4::ParserRuleContext {
  public:
    ObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    KeyvalsContext *keyvals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ObjectContext* object();

  class  KeyvalsContext : public antlr4::ParserRuleContext {
  public:
    KeyvalsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<KeyvalContext *> keyval();
    KeyvalContext* keyval(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeyvalsContext* keyvals();

  class  KeyvalContext : public antlr4::ParserRuleContext {
  public:
    KeyvalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    ValContext *val();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeyvalContext* keyval();

  class  ValContext : public antlr4::ParserRuleContext {
  public:
    ValContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValContext* val();

  class  MedlistContext : public antlr4::ParserRuleContext {
  public:
    MedlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MedlistContext* medlist();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

