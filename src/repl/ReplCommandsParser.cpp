
// Generated from ReplCommands.g4 by ANTLR 4.11.1


#include "ReplCommandsVisitor.h"

#include "ReplCommandsParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ReplCommandsParserStaticData final {
  ReplCommandsParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ReplCommandsParserStaticData(const ReplCommandsParserStaticData&) = delete;
  ReplCommandsParserStaticData(ReplCommandsParserStaticData&&) = delete;
  ReplCommandsParserStaticData& operator=(const ReplCommandsParserStaticData&) = delete;
  ReplCommandsParserStaticData& operator=(ReplCommandsParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag replcommandsParserOnceFlag;
ReplCommandsParserStaticData *replcommandsParserStaticData = nullptr;

void replcommandsParserInitialize() {
  assert(replcommandsParserStaticData == nullptr);
  auto staticData = std::make_unique<ReplCommandsParserStaticData>(
    std::vector<std::string>{
      "commandLine", "command", "object", "properties", "keyval", "val", 
      "medlist"
    },
    std::vector<std::string>{
      "", "'add'", "'delete'", "'update'", "'examine'", "'prescribe'", "'meds'", 
      "'administer'", "'med'", "'surgery'", "'hospitalize'", "'discharge'", 
      "'search'", "'{'", "'}'", "','", "'='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "LF", "ID", "INT", "FLOAT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,21,81,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,1,0,
  	1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,
  	50,8,1,1,2,1,2,1,2,3,2,55,8,2,1,2,1,2,1,3,1,3,1,3,5,3,62,8,3,10,3,12,
  	3,65,9,3,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,5,6,76,8,6,10,6,12,6,79,
  	9,6,1,6,0,0,7,0,2,4,6,8,10,12,0,1,1,0,18,20,85,0,14,1,0,0,0,2,49,1,0,
  	0,0,4,51,1,0,0,0,6,58,1,0,0,0,8,66,1,0,0,0,10,70,1,0,0,0,12,72,1,0,0,
  	0,14,15,3,2,1,0,15,16,5,17,0,0,16,1,1,0,0,0,17,18,5,1,0,0,18,50,3,4,2,
  	0,19,20,5,2,0,0,20,50,3,4,2,0,21,22,5,3,0,0,22,50,3,4,2,0,23,24,5,4,0,
  	0,24,25,3,4,2,0,25,26,3,4,2,0,26,50,1,0,0,0,27,28,5,5,0,0,28,29,3,4,2,
  	0,29,30,3,4,2,0,30,31,5,6,0,0,31,32,3,12,6,0,32,50,1,0,0,0,33,34,5,7,
  	0,0,34,35,3,4,2,0,35,36,3,4,2,0,36,37,5,8,0,0,37,38,5,18,0,0,38,50,1,
  	0,0,0,39,40,5,9,0,0,40,41,3,4,2,0,41,42,3,4,2,0,42,50,1,0,0,0,43,44,5,
  	10,0,0,44,50,3,4,2,0,45,46,5,11,0,0,46,50,3,4,2,0,47,48,5,12,0,0,48,50,
  	3,4,2,0,49,17,1,0,0,0,49,19,1,0,0,0,49,21,1,0,0,0,49,23,1,0,0,0,49,27,
  	1,0,0,0,49,33,1,0,0,0,49,39,1,0,0,0,49,43,1,0,0,0,49,45,1,0,0,0,49,47,
  	1,0,0,0,50,3,1,0,0,0,51,52,5,18,0,0,52,54,5,13,0,0,53,55,3,6,3,0,54,53,
  	1,0,0,0,54,55,1,0,0,0,55,56,1,0,0,0,56,57,5,14,0,0,57,5,1,0,0,0,58,63,
  	3,8,4,0,59,60,5,15,0,0,60,62,3,8,4,0,61,59,1,0,0,0,62,65,1,0,0,0,63,61,
  	1,0,0,0,63,64,1,0,0,0,64,7,1,0,0,0,65,63,1,0,0,0,66,67,5,18,0,0,67,68,
  	5,16,0,0,68,69,3,10,5,0,69,9,1,0,0,0,70,71,7,0,0,0,71,11,1,0,0,0,72,77,
  	5,18,0,0,73,74,5,15,0,0,74,76,5,18,0,0,75,73,1,0,0,0,76,79,1,0,0,0,77,
  	75,1,0,0,0,77,78,1,0,0,0,78,13,1,0,0,0,79,77,1,0,0,0,4,49,54,63,77
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  replcommandsParserStaticData = staticData.release();
}

}

ReplCommandsParser::ReplCommandsParser(TokenStream *input) : ReplCommandsParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ReplCommandsParser::ReplCommandsParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ReplCommandsParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *replcommandsParserStaticData->atn, replcommandsParserStaticData->decisionToDFA, replcommandsParserStaticData->sharedContextCache, options);
}

ReplCommandsParser::~ReplCommandsParser() {
  delete _interpreter;
}

const atn::ATN& ReplCommandsParser::getATN() const {
  return *replcommandsParserStaticData->atn;
}

std::string ReplCommandsParser::getGrammarFileName() const {
  return "ReplCommands.g4";
}

const std::vector<std::string>& ReplCommandsParser::getRuleNames() const {
  return replcommandsParserStaticData->ruleNames;
}

const dfa::Vocabulary& ReplCommandsParser::getVocabulary() const {
  return replcommandsParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ReplCommandsParser::getSerializedATN() const {
  return replcommandsParserStaticData->serializedATN;
}


//----------------- CommandLineContext ------------------------------------------------------------------

ReplCommandsParser::CommandLineContext::CommandLineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ReplCommandsParser::CommandContext* ReplCommandsParser::CommandLineContext::command() {
  return getRuleContext<ReplCommandsParser::CommandContext>(0);
}

tree::TerminalNode* ReplCommandsParser::CommandLineContext::LF() {
  return getToken(ReplCommandsParser::LF, 0);
}


size_t ReplCommandsParser::CommandLineContext::getRuleIndex() const {
  return ReplCommandsParser::RuleCommandLine;
}


std::any ReplCommandsParser::CommandLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ReplCommandsVisitor*>(visitor))
    return parserVisitor->visitCommandLine(this);
  else
    return visitor->visitChildren(this);
}

ReplCommandsParser::CommandLineContext* ReplCommandsParser::commandLine() {
  CommandLineContext *_localctx = _tracker.createInstance<CommandLineContext>(_ctx, getState());
  enterRule(_localctx, 0, ReplCommandsParser::RuleCommandLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(14);
    command();
    setState(15);
    match(ReplCommandsParser::LF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommandContext ------------------------------------------------------------------

ReplCommandsParser::CommandContext::CommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ReplCommandsParser::CommandContext::getRuleIndex() const {
  return ReplCommandsParser::RuleCommand;
}

void ReplCommandsParser::CommandContext::copyFrom(CommandContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DeleteCommandContext ------------------------------------------------------------------

ReplCommandsParser::ObjectContext* ReplCommandsParser::DeleteCommandContext::object() {
  return getRuleContext<ReplCommandsParser::ObjectContext>(0);
}

ReplCommandsParser::DeleteCommandContext::DeleteCommandContext(CommandContext *ctx) { copyFrom(ctx); }


std::any ReplCommandsParser::DeleteCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ReplCommandsVisitor*>(visitor))
    return parserVisitor->visitDeleteCommand(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HospitalizeCommandContext ------------------------------------------------------------------

ReplCommandsParser::ObjectContext* ReplCommandsParser::HospitalizeCommandContext::object() {
  return getRuleContext<ReplCommandsParser::ObjectContext>(0);
}

ReplCommandsParser::HospitalizeCommandContext::HospitalizeCommandContext(CommandContext *ctx) { copyFrom(ctx); }


std::any ReplCommandsParser::HospitalizeCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ReplCommandsVisitor*>(visitor))
    return parserVisitor->visitHospitalizeCommand(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DischargeCommandContext ------------------------------------------------------------------

ReplCommandsParser::ObjectContext* ReplCommandsParser::DischargeCommandContext::object() {
  return getRuleContext<ReplCommandsParser::ObjectContext>(0);
}

ReplCommandsParser::DischargeCommandContext::DischargeCommandContext(CommandContext *ctx) { copyFrom(ctx); }


std::any ReplCommandsParser::DischargeCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ReplCommandsVisitor*>(visitor))
    return parserVisitor->visitDischargeCommand(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SurgeryCommandContext ------------------------------------------------------------------

std::vector<ReplCommandsParser::ObjectContext *> ReplCommandsParser::SurgeryCommandContext::object() {
  return getRuleContexts<ReplCommandsParser::ObjectContext>();
}

ReplCommandsParser::ObjectContext* ReplCommandsParser::SurgeryCommandContext::object(size_t i) {
  return getRuleContext<ReplCommandsParser::ObjectContext>(i);
}

ReplCommandsParser::SurgeryCommandContext::SurgeryCommandContext(CommandContext *ctx) { copyFrom(ctx); }


std::any ReplCommandsParser::SurgeryCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ReplCommandsVisitor*>(visitor))
    return parserVisitor->visitSurgeryCommand(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddCommandContext ------------------------------------------------------------------

ReplCommandsParser::ObjectContext* ReplCommandsParser::AddCommandContext::object() {
  return getRuleContext<ReplCommandsParser::ObjectContext>(0);
}

ReplCommandsParser::AddCommandContext::AddCommandContext(CommandContext *ctx) { copyFrom(ctx); }


std::any ReplCommandsParser::AddCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ReplCommandsVisitor*>(visitor))
    return parserVisitor->visitAddCommand(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UpdateCommandContext ------------------------------------------------------------------

ReplCommandsParser::ObjectContext* ReplCommandsParser::UpdateCommandContext::object() {
  return getRuleContext<ReplCommandsParser::ObjectContext>(0);
}

ReplCommandsParser::UpdateCommandContext::UpdateCommandContext(CommandContext *ctx) { copyFrom(ctx); }


std::any ReplCommandsParser::UpdateCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ReplCommandsVisitor*>(visitor))
    return parserVisitor->visitUpdateCommand(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrescribeCommandContext ------------------------------------------------------------------

std::vector<ReplCommandsParser::ObjectContext *> ReplCommandsParser::PrescribeCommandContext::object() {
  return getRuleContexts<ReplCommandsParser::ObjectContext>();
}

ReplCommandsParser::ObjectContext* ReplCommandsParser::PrescribeCommandContext::object(size_t i) {
  return getRuleContext<ReplCommandsParser::ObjectContext>(i);
}

ReplCommandsParser::MedlistContext* ReplCommandsParser::PrescribeCommandContext::medlist() {
  return getRuleContext<ReplCommandsParser::MedlistContext>(0);
}

ReplCommandsParser::PrescribeCommandContext::PrescribeCommandContext(CommandContext *ctx) { copyFrom(ctx); }


std::any ReplCommandsParser::PrescribeCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ReplCommandsVisitor*>(visitor))
    return parserVisitor->visitPrescribeCommand(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExamineCommandContext ------------------------------------------------------------------

std::vector<ReplCommandsParser::ObjectContext *> ReplCommandsParser::ExamineCommandContext::object() {
  return getRuleContexts<ReplCommandsParser::ObjectContext>();
}

ReplCommandsParser::ObjectContext* ReplCommandsParser::ExamineCommandContext::object(size_t i) {
  return getRuleContext<ReplCommandsParser::ObjectContext>(i);
}

ReplCommandsParser::ExamineCommandContext::ExamineCommandContext(CommandContext *ctx) { copyFrom(ctx); }


std::any ReplCommandsParser::ExamineCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ReplCommandsVisitor*>(visitor))
    return parserVisitor->visitExamineCommand(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AdministerCommandContext ------------------------------------------------------------------

std::vector<ReplCommandsParser::ObjectContext *> ReplCommandsParser::AdministerCommandContext::object() {
  return getRuleContexts<ReplCommandsParser::ObjectContext>();
}

ReplCommandsParser::ObjectContext* ReplCommandsParser::AdministerCommandContext::object(size_t i) {
  return getRuleContext<ReplCommandsParser::ObjectContext>(i);
}

tree::TerminalNode* ReplCommandsParser::AdministerCommandContext::ID() {
  return getToken(ReplCommandsParser::ID, 0);
}

ReplCommandsParser::AdministerCommandContext::AdministerCommandContext(CommandContext *ctx) { copyFrom(ctx); }


std::any ReplCommandsParser::AdministerCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ReplCommandsVisitor*>(visitor))
    return parserVisitor->visitAdministerCommand(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SearchCommandContext ------------------------------------------------------------------

ReplCommandsParser::ObjectContext* ReplCommandsParser::SearchCommandContext::object() {
  return getRuleContext<ReplCommandsParser::ObjectContext>(0);
}

ReplCommandsParser::SearchCommandContext::SearchCommandContext(CommandContext *ctx) { copyFrom(ctx); }


std::any ReplCommandsParser::SearchCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ReplCommandsVisitor*>(visitor))
    return parserVisitor->visitSearchCommand(this);
  else
    return visitor->visitChildren(this);
}
ReplCommandsParser::CommandContext* ReplCommandsParser::command() {
  CommandContext *_localctx = _tracker.createInstance<CommandContext>(_ctx, getState());
  enterRule(_localctx, 2, ReplCommandsParser::RuleCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(49);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ReplCommandsParser::T__0: {
        _localctx = _tracker.createInstance<ReplCommandsParser::AddCommandContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(17);
        match(ReplCommandsParser::T__0);
        setState(18);
        object();
        break;
      }

      case ReplCommandsParser::T__1: {
        _localctx = _tracker.createInstance<ReplCommandsParser::DeleteCommandContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(19);
        match(ReplCommandsParser::T__1);
        setState(20);
        object();
        break;
      }

      case ReplCommandsParser::T__2: {
        _localctx = _tracker.createInstance<ReplCommandsParser::UpdateCommandContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(21);
        match(ReplCommandsParser::T__2);
        setState(22);
        object();
        break;
      }

      case ReplCommandsParser::T__3: {
        _localctx = _tracker.createInstance<ReplCommandsParser::ExamineCommandContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(23);
        match(ReplCommandsParser::T__3);
        setState(24);
        object();
        setState(25);
        object();
        break;
      }

      case ReplCommandsParser::T__4: {
        _localctx = _tracker.createInstance<ReplCommandsParser::PrescribeCommandContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(27);
        match(ReplCommandsParser::T__4);
        setState(28);
        object();
        setState(29);
        object();
        setState(30);
        match(ReplCommandsParser::T__5);
        setState(31);
        medlist();
        break;
      }

      case ReplCommandsParser::T__6: {
        _localctx = _tracker.createInstance<ReplCommandsParser::AdministerCommandContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(33);
        match(ReplCommandsParser::T__6);
        setState(34);
        object();
        setState(35);
        object();
        setState(36);
        match(ReplCommandsParser::T__7);
        setState(37);
        match(ReplCommandsParser::ID);
        break;
      }

      case ReplCommandsParser::T__8: {
        _localctx = _tracker.createInstance<ReplCommandsParser::SurgeryCommandContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(39);
        match(ReplCommandsParser::T__8);
        setState(40);
        object();
        setState(41);
        object();
        break;
      }

      case ReplCommandsParser::T__9: {
        _localctx = _tracker.createInstance<ReplCommandsParser::HospitalizeCommandContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(43);
        match(ReplCommandsParser::T__9);
        setState(44);
        object();
        break;
      }

      case ReplCommandsParser::T__10: {
        _localctx = _tracker.createInstance<ReplCommandsParser::DischargeCommandContext>(_localctx);
        enterOuterAlt(_localctx, 9);
        setState(45);
        match(ReplCommandsParser::T__10);
        setState(46);
        object();
        break;
      }

      case ReplCommandsParser::T__11: {
        _localctx = _tracker.createInstance<ReplCommandsParser::SearchCommandContext>(_localctx);
        enterOuterAlt(_localctx, 10);
        setState(47);
        match(ReplCommandsParser::T__11);
        setState(48);
        object();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectContext ------------------------------------------------------------------

ReplCommandsParser::ObjectContext::ObjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ReplCommandsParser::ObjectContext::ID() {
  return getToken(ReplCommandsParser::ID, 0);
}

ReplCommandsParser::PropertiesContext* ReplCommandsParser::ObjectContext::properties() {
  return getRuleContext<ReplCommandsParser::PropertiesContext>(0);
}


size_t ReplCommandsParser::ObjectContext::getRuleIndex() const {
  return ReplCommandsParser::RuleObject;
}


std::any ReplCommandsParser::ObjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ReplCommandsVisitor*>(visitor))
    return parserVisitor->visitObject(this);
  else
    return visitor->visitChildren(this);
}

ReplCommandsParser::ObjectContext* ReplCommandsParser::object() {
  ObjectContext *_localctx = _tracker.createInstance<ObjectContext>(_ctx, getState());
  enterRule(_localctx, 4, ReplCommandsParser::RuleObject);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(ReplCommandsParser::ID);
    setState(52);
    match(ReplCommandsParser::T__12);
    setState(54);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ReplCommandsParser::ID) {
      setState(53);
      properties();
    }
    setState(56);
    match(ReplCommandsParser::T__13);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertiesContext ------------------------------------------------------------------

ReplCommandsParser::PropertiesContext::PropertiesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ReplCommandsParser::KeyvalContext *> ReplCommandsParser::PropertiesContext::keyval() {
  return getRuleContexts<ReplCommandsParser::KeyvalContext>();
}

ReplCommandsParser::KeyvalContext* ReplCommandsParser::PropertiesContext::keyval(size_t i) {
  return getRuleContext<ReplCommandsParser::KeyvalContext>(i);
}


size_t ReplCommandsParser::PropertiesContext::getRuleIndex() const {
  return ReplCommandsParser::RuleProperties;
}


std::any ReplCommandsParser::PropertiesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ReplCommandsVisitor*>(visitor))
    return parserVisitor->visitProperties(this);
  else
    return visitor->visitChildren(this);
}

ReplCommandsParser::PropertiesContext* ReplCommandsParser::properties() {
  PropertiesContext *_localctx = _tracker.createInstance<PropertiesContext>(_ctx, getState());
  enterRule(_localctx, 6, ReplCommandsParser::RuleProperties);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    keyval();
    setState(63);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ReplCommandsParser::T__14) {
      setState(59);
      match(ReplCommandsParser::T__14);
      setState(60);
      keyval();
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyvalContext ------------------------------------------------------------------

ReplCommandsParser::KeyvalContext::KeyvalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ReplCommandsParser::KeyvalContext::ID() {
  return getToken(ReplCommandsParser::ID, 0);
}

ReplCommandsParser::ValContext* ReplCommandsParser::KeyvalContext::val() {
  return getRuleContext<ReplCommandsParser::ValContext>(0);
}


size_t ReplCommandsParser::KeyvalContext::getRuleIndex() const {
  return ReplCommandsParser::RuleKeyval;
}


std::any ReplCommandsParser::KeyvalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ReplCommandsVisitor*>(visitor))
    return parserVisitor->visitKeyval(this);
  else
    return visitor->visitChildren(this);
}

ReplCommandsParser::KeyvalContext* ReplCommandsParser::keyval() {
  KeyvalContext *_localctx = _tracker.createInstance<KeyvalContext>(_ctx, getState());
  enterRule(_localctx, 8, ReplCommandsParser::RuleKeyval);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(ReplCommandsParser::ID);
    setState(67);
    match(ReplCommandsParser::T__15);
    setState(68);
    val();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValContext ------------------------------------------------------------------

ReplCommandsParser::ValContext::ValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ReplCommandsParser::ValContext::ID() {
  return getToken(ReplCommandsParser::ID, 0);
}

tree::TerminalNode* ReplCommandsParser::ValContext::INT() {
  return getToken(ReplCommandsParser::INT, 0);
}

tree::TerminalNode* ReplCommandsParser::ValContext::FLOAT() {
  return getToken(ReplCommandsParser::FLOAT, 0);
}


size_t ReplCommandsParser::ValContext::getRuleIndex() const {
  return ReplCommandsParser::RuleVal;
}


std::any ReplCommandsParser::ValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ReplCommandsVisitor*>(visitor))
    return parserVisitor->visitVal(this);
  else
    return visitor->visitChildren(this);
}

ReplCommandsParser::ValContext* ReplCommandsParser::val() {
  ValContext *_localctx = _tracker.createInstance<ValContext>(_ctx, getState());
  enterRule(_localctx, 10, ReplCommandsParser::RuleVal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1835008) != 0)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MedlistContext ------------------------------------------------------------------

ReplCommandsParser::MedlistContext::MedlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ReplCommandsParser::MedlistContext::ID() {
  return getTokens(ReplCommandsParser::ID);
}

tree::TerminalNode* ReplCommandsParser::MedlistContext::ID(size_t i) {
  return getToken(ReplCommandsParser::ID, i);
}


size_t ReplCommandsParser::MedlistContext::getRuleIndex() const {
  return ReplCommandsParser::RuleMedlist;
}


std::any ReplCommandsParser::MedlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ReplCommandsVisitor*>(visitor))
    return parserVisitor->visitMedlist(this);
  else
    return visitor->visitChildren(this);
}

ReplCommandsParser::MedlistContext* ReplCommandsParser::medlist() {
  MedlistContext *_localctx = _tracker.createInstance<MedlistContext>(_ctx, getState());
  enterRule(_localctx, 12, ReplCommandsParser::RuleMedlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    match(ReplCommandsParser::ID);
    setState(77);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ReplCommandsParser::T__14) {
      setState(73);
      match(ReplCommandsParser::T__14);
      setState(74);
      match(ReplCommandsParser::ID);
      setState(79);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void ReplCommandsParser::initialize() {
  ::antlr4::internal::call_once(replcommandsParserOnceFlag, replcommandsParserInitialize);
}
