
// Generated from ReplCommands.g4 by ANTLR 4.11.1


#include "ReplCommandsListener.h"

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
      "commandLine", "command", "addCommand", "deleteCommand", "updateCommand", 
      "examineCommand", "prescribeCommand", "administerCommand", "surgeryCommand", 
      "hospitalizeCommand", "dischargeCommand", "searchCommand", "object", 
      "keyvals", "keyval", "val", "medlist"
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
  	4,1,21,117,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,3,1,48,8,1,1,2,1,2,1,2,1,3,1,3,1,3,1,4,1,4,1,4,1,5,1,5,1,5,1,5,
  	1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,9,1,
  	9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,3,12,91,8,12,1,12,
  	1,12,1,13,1,13,1,13,5,13,98,8,13,10,13,12,13,101,9,13,1,14,1,14,1,14,
  	1,14,1,15,1,15,1,16,1,16,1,16,5,16,112,8,16,10,16,12,16,115,9,16,1,16,
  	0,0,17,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,0,1,1,0,18,20,111,
  	0,34,1,0,0,0,2,47,1,0,0,0,4,49,1,0,0,0,6,52,1,0,0,0,8,55,1,0,0,0,10,58,
  	1,0,0,0,12,62,1,0,0,0,14,68,1,0,0,0,16,74,1,0,0,0,18,78,1,0,0,0,20,81,
  	1,0,0,0,22,84,1,0,0,0,24,87,1,0,0,0,26,94,1,0,0,0,28,102,1,0,0,0,30,106,
  	1,0,0,0,32,108,1,0,0,0,34,35,3,2,1,0,35,36,5,17,0,0,36,1,1,0,0,0,37,48,
  	3,4,2,0,38,48,3,6,3,0,39,48,3,8,4,0,40,48,3,10,5,0,41,48,3,12,6,0,42,
  	48,3,14,7,0,43,48,3,16,8,0,44,48,3,18,9,0,45,48,3,20,10,0,46,48,3,22,
  	11,0,47,37,1,0,0,0,47,38,1,0,0,0,47,39,1,0,0,0,47,40,1,0,0,0,47,41,1,
  	0,0,0,47,42,1,0,0,0,47,43,1,0,0,0,47,44,1,0,0,0,47,45,1,0,0,0,47,46,1,
  	0,0,0,48,3,1,0,0,0,49,50,5,1,0,0,50,51,3,24,12,0,51,5,1,0,0,0,52,53,5,
  	2,0,0,53,54,3,24,12,0,54,7,1,0,0,0,55,56,5,3,0,0,56,57,3,24,12,0,57,9,
  	1,0,0,0,58,59,5,4,0,0,59,60,3,24,12,0,60,61,3,24,12,0,61,11,1,0,0,0,62,
  	63,5,5,0,0,63,64,3,24,12,0,64,65,3,24,12,0,65,66,5,6,0,0,66,67,3,32,16,
  	0,67,13,1,0,0,0,68,69,5,7,0,0,69,70,3,24,12,0,70,71,3,24,12,0,71,72,5,
  	8,0,0,72,73,5,18,0,0,73,15,1,0,0,0,74,75,5,9,0,0,75,76,3,24,12,0,76,77,
  	3,24,12,0,77,17,1,0,0,0,78,79,5,10,0,0,79,80,3,24,12,0,80,19,1,0,0,0,
  	81,82,5,11,0,0,82,83,3,24,12,0,83,21,1,0,0,0,84,85,5,12,0,0,85,86,3,24,
  	12,0,86,23,1,0,0,0,87,88,5,18,0,0,88,90,5,13,0,0,89,91,3,26,13,0,90,89,
  	1,0,0,0,90,91,1,0,0,0,91,92,1,0,0,0,92,93,5,14,0,0,93,25,1,0,0,0,94,99,
  	3,28,14,0,95,96,5,15,0,0,96,98,3,28,14,0,97,95,1,0,0,0,98,101,1,0,0,0,
  	99,97,1,0,0,0,99,100,1,0,0,0,100,27,1,0,0,0,101,99,1,0,0,0,102,103,5,
  	18,0,0,103,104,5,16,0,0,104,105,3,30,15,0,105,29,1,0,0,0,106,107,7,0,
  	0,0,107,31,1,0,0,0,108,113,5,18,0,0,109,110,5,15,0,0,110,112,5,18,0,0,
  	111,109,1,0,0,0,112,115,1,0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,33,
  	1,0,0,0,115,113,1,0,0,0,4,47,90,99,113
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

void ReplCommandsParser::CommandLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommandLine(this);
}

void ReplCommandsParser::CommandLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommandLine(this);
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
    setState(34);
    command();
    setState(35);
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

ReplCommandsParser::AddCommandContext* ReplCommandsParser::CommandContext::addCommand() {
  return getRuleContext<ReplCommandsParser::AddCommandContext>(0);
}

ReplCommandsParser::DeleteCommandContext* ReplCommandsParser::CommandContext::deleteCommand() {
  return getRuleContext<ReplCommandsParser::DeleteCommandContext>(0);
}

ReplCommandsParser::UpdateCommandContext* ReplCommandsParser::CommandContext::updateCommand() {
  return getRuleContext<ReplCommandsParser::UpdateCommandContext>(0);
}

ReplCommandsParser::ExamineCommandContext* ReplCommandsParser::CommandContext::examineCommand() {
  return getRuleContext<ReplCommandsParser::ExamineCommandContext>(0);
}

ReplCommandsParser::PrescribeCommandContext* ReplCommandsParser::CommandContext::prescribeCommand() {
  return getRuleContext<ReplCommandsParser::PrescribeCommandContext>(0);
}

ReplCommandsParser::AdministerCommandContext* ReplCommandsParser::CommandContext::administerCommand() {
  return getRuleContext<ReplCommandsParser::AdministerCommandContext>(0);
}

ReplCommandsParser::SurgeryCommandContext* ReplCommandsParser::CommandContext::surgeryCommand() {
  return getRuleContext<ReplCommandsParser::SurgeryCommandContext>(0);
}

ReplCommandsParser::HospitalizeCommandContext* ReplCommandsParser::CommandContext::hospitalizeCommand() {
  return getRuleContext<ReplCommandsParser::HospitalizeCommandContext>(0);
}

ReplCommandsParser::DischargeCommandContext* ReplCommandsParser::CommandContext::dischargeCommand() {
  return getRuleContext<ReplCommandsParser::DischargeCommandContext>(0);
}

ReplCommandsParser::SearchCommandContext* ReplCommandsParser::CommandContext::searchCommand() {
  return getRuleContext<ReplCommandsParser::SearchCommandContext>(0);
}


size_t ReplCommandsParser::CommandContext::getRuleIndex() const {
  return ReplCommandsParser::RuleCommand;
}

void ReplCommandsParser::CommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommand(this);
}

void ReplCommandsParser::CommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommand(this);
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
    setState(47);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ReplCommandsParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(37);
        addCommand();
        break;
      }

      case ReplCommandsParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(38);
        deleteCommand();
        break;
      }

      case ReplCommandsParser::T__2: {
        enterOuterAlt(_localctx, 3);
        setState(39);
        updateCommand();
        break;
      }

      case ReplCommandsParser::T__3: {
        enterOuterAlt(_localctx, 4);
        setState(40);
        examineCommand();
        break;
      }

      case ReplCommandsParser::T__4: {
        enterOuterAlt(_localctx, 5);
        setState(41);
        prescribeCommand();
        break;
      }

      case ReplCommandsParser::T__6: {
        enterOuterAlt(_localctx, 6);
        setState(42);
        administerCommand();
        break;
      }

      case ReplCommandsParser::T__8: {
        enterOuterAlt(_localctx, 7);
        setState(43);
        surgeryCommand();
        break;
      }

      case ReplCommandsParser::T__9: {
        enterOuterAlt(_localctx, 8);
        setState(44);
        hospitalizeCommand();
        break;
      }

      case ReplCommandsParser::T__10: {
        enterOuterAlt(_localctx, 9);
        setState(45);
        dischargeCommand();
        break;
      }

      case ReplCommandsParser::T__11: {
        enterOuterAlt(_localctx, 10);
        setState(46);
        searchCommand();
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

//----------------- AddCommandContext ------------------------------------------------------------------

ReplCommandsParser::AddCommandContext::AddCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ReplCommandsParser::ObjectContext* ReplCommandsParser::AddCommandContext::object() {
  return getRuleContext<ReplCommandsParser::ObjectContext>(0);
}


size_t ReplCommandsParser::AddCommandContext::getRuleIndex() const {
  return ReplCommandsParser::RuleAddCommand;
}

void ReplCommandsParser::AddCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddCommand(this);
}

void ReplCommandsParser::AddCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddCommand(this);
}

ReplCommandsParser::AddCommandContext* ReplCommandsParser::addCommand() {
  AddCommandContext *_localctx = _tracker.createInstance<AddCommandContext>(_ctx, getState());
  enterRule(_localctx, 4, ReplCommandsParser::RuleAddCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    match(ReplCommandsParser::T__0);
    setState(50);
    object();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeleteCommandContext ------------------------------------------------------------------

ReplCommandsParser::DeleteCommandContext::DeleteCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ReplCommandsParser::ObjectContext* ReplCommandsParser::DeleteCommandContext::object() {
  return getRuleContext<ReplCommandsParser::ObjectContext>(0);
}


size_t ReplCommandsParser::DeleteCommandContext::getRuleIndex() const {
  return ReplCommandsParser::RuleDeleteCommand;
}

void ReplCommandsParser::DeleteCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeleteCommand(this);
}

void ReplCommandsParser::DeleteCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeleteCommand(this);
}

ReplCommandsParser::DeleteCommandContext* ReplCommandsParser::deleteCommand() {
  DeleteCommandContext *_localctx = _tracker.createInstance<DeleteCommandContext>(_ctx, getState());
  enterRule(_localctx, 6, ReplCommandsParser::RuleDeleteCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(ReplCommandsParser::T__1);
    setState(53);
    object();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UpdateCommandContext ------------------------------------------------------------------

ReplCommandsParser::UpdateCommandContext::UpdateCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ReplCommandsParser::ObjectContext* ReplCommandsParser::UpdateCommandContext::object() {
  return getRuleContext<ReplCommandsParser::ObjectContext>(0);
}


size_t ReplCommandsParser::UpdateCommandContext::getRuleIndex() const {
  return ReplCommandsParser::RuleUpdateCommand;
}

void ReplCommandsParser::UpdateCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUpdateCommand(this);
}

void ReplCommandsParser::UpdateCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUpdateCommand(this);
}

ReplCommandsParser::UpdateCommandContext* ReplCommandsParser::updateCommand() {
  UpdateCommandContext *_localctx = _tracker.createInstance<UpdateCommandContext>(_ctx, getState());
  enterRule(_localctx, 8, ReplCommandsParser::RuleUpdateCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    match(ReplCommandsParser::T__2);
    setState(56);
    object();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExamineCommandContext ------------------------------------------------------------------

ReplCommandsParser::ExamineCommandContext::ExamineCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ReplCommandsParser::ObjectContext *> ReplCommandsParser::ExamineCommandContext::object() {
  return getRuleContexts<ReplCommandsParser::ObjectContext>();
}

ReplCommandsParser::ObjectContext* ReplCommandsParser::ExamineCommandContext::object(size_t i) {
  return getRuleContext<ReplCommandsParser::ObjectContext>(i);
}


size_t ReplCommandsParser::ExamineCommandContext::getRuleIndex() const {
  return ReplCommandsParser::RuleExamineCommand;
}

void ReplCommandsParser::ExamineCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExamineCommand(this);
}

void ReplCommandsParser::ExamineCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExamineCommand(this);
}

ReplCommandsParser::ExamineCommandContext* ReplCommandsParser::examineCommand() {
  ExamineCommandContext *_localctx = _tracker.createInstance<ExamineCommandContext>(_ctx, getState());
  enterRule(_localctx, 10, ReplCommandsParser::RuleExamineCommand);

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
    match(ReplCommandsParser::T__3);
    setState(59);
    object();
    setState(60);
    object();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrescribeCommandContext ------------------------------------------------------------------

ReplCommandsParser::PrescribeCommandContext::PrescribeCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ReplCommandsParser::ObjectContext *> ReplCommandsParser::PrescribeCommandContext::object() {
  return getRuleContexts<ReplCommandsParser::ObjectContext>();
}

ReplCommandsParser::ObjectContext* ReplCommandsParser::PrescribeCommandContext::object(size_t i) {
  return getRuleContext<ReplCommandsParser::ObjectContext>(i);
}

ReplCommandsParser::MedlistContext* ReplCommandsParser::PrescribeCommandContext::medlist() {
  return getRuleContext<ReplCommandsParser::MedlistContext>(0);
}


size_t ReplCommandsParser::PrescribeCommandContext::getRuleIndex() const {
  return ReplCommandsParser::RulePrescribeCommand;
}

void ReplCommandsParser::PrescribeCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrescribeCommand(this);
}

void ReplCommandsParser::PrescribeCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrescribeCommand(this);
}

ReplCommandsParser::PrescribeCommandContext* ReplCommandsParser::prescribeCommand() {
  PrescribeCommandContext *_localctx = _tracker.createInstance<PrescribeCommandContext>(_ctx, getState());
  enterRule(_localctx, 12, ReplCommandsParser::RulePrescribeCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(ReplCommandsParser::T__4);
    setState(63);
    object();
    setState(64);
    object();
    setState(65);
    match(ReplCommandsParser::T__5);
    setState(66);
    medlist();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdministerCommandContext ------------------------------------------------------------------

ReplCommandsParser::AdministerCommandContext::AdministerCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ReplCommandsParser::ObjectContext *> ReplCommandsParser::AdministerCommandContext::object() {
  return getRuleContexts<ReplCommandsParser::ObjectContext>();
}

ReplCommandsParser::ObjectContext* ReplCommandsParser::AdministerCommandContext::object(size_t i) {
  return getRuleContext<ReplCommandsParser::ObjectContext>(i);
}

tree::TerminalNode* ReplCommandsParser::AdministerCommandContext::ID() {
  return getToken(ReplCommandsParser::ID, 0);
}


size_t ReplCommandsParser::AdministerCommandContext::getRuleIndex() const {
  return ReplCommandsParser::RuleAdministerCommand;
}

void ReplCommandsParser::AdministerCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdministerCommand(this);
}

void ReplCommandsParser::AdministerCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdministerCommand(this);
}

ReplCommandsParser::AdministerCommandContext* ReplCommandsParser::administerCommand() {
  AdministerCommandContext *_localctx = _tracker.createInstance<AdministerCommandContext>(_ctx, getState());
  enterRule(_localctx, 14, ReplCommandsParser::RuleAdministerCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(ReplCommandsParser::T__6);
    setState(69);
    object();
    setState(70);
    object();
    setState(71);
    match(ReplCommandsParser::T__7);
    setState(72);
    match(ReplCommandsParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SurgeryCommandContext ------------------------------------------------------------------

ReplCommandsParser::SurgeryCommandContext::SurgeryCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ReplCommandsParser::ObjectContext *> ReplCommandsParser::SurgeryCommandContext::object() {
  return getRuleContexts<ReplCommandsParser::ObjectContext>();
}

ReplCommandsParser::ObjectContext* ReplCommandsParser::SurgeryCommandContext::object(size_t i) {
  return getRuleContext<ReplCommandsParser::ObjectContext>(i);
}


size_t ReplCommandsParser::SurgeryCommandContext::getRuleIndex() const {
  return ReplCommandsParser::RuleSurgeryCommand;
}

void ReplCommandsParser::SurgeryCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSurgeryCommand(this);
}

void ReplCommandsParser::SurgeryCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSurgeryCommand(this);
}

ReplCommandsParser::SurgeryCommandContext* ReplCommandsParser::surgeryCommand() {
  SurgeryCommandContext *_localctx = _tracker.createInstance<SurgeryCommandContext>(_ctx, getState());
  enterRule(_localctx, 16, ReplCommandsParser::RuleSurgeryCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(ReplCommandsParser::T__8);
    setState(75);
    object();
    setState(76);
    object();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HospitalizeCommandContext ------------------------------------------------------------------

ReplCommandsParser::HospitalizeCommandContext::HospitalizeCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ReplCommandsParser::ObjectContext* ReplCommandsParser::HospitalizeCommandContext::object() {
  return getRuleContext<ReplCommandsParser::ObjectContext>(0);
}


size_t ReplCommandsParser::HospitalizeCommandContext::getRuleIndex() const {
  return ReplCommandsParser::RuleHospitalizeCommand;
}

void ReplCommandsParser::HospitalizeCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHospitalizeCommand(this);
}

void ReplCommandsParser::HospitalizeCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHospitalizeCommand(this);
}

ReplCommandsParser::HospitalizeCommandContext* ReplCommandsParser::hospitalizeCommand() {
  HospitalizeCommandContext *_localctx = _tracker.createInstance<HospitalizeCommandContext>(_ctx, getState());
  enterRule(_localctx, 18, ReplCommandsParser::RuleHospitalizeCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(ReplCommandsParser::T__9);
    setState(79);
    object();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DischargeCommandContext ------------------------------------------------------------------

ReplCommandsParser::DischargeCommandContext::DischargeCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ReplCommandsParser::ObjectContext* ReplCommandsParser::DischargeCommandContext::object() {
  return getRuleContext<ReplCommandsParser::ObjectContext>(0);
}


size_t ReplCommandsParser::DischargeCommandContext::getRuleIndex() const {
  return ReplCommandsParser::RuleDischargeCommand;
}

void ReplCommandsParser::DischargeCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDischargeCommand(this);
}

void ReplCommandsParser::DischargeCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDischargeCommand(this);
}

ReplCommandsParser::DischargeCommandContext* ReplCommandsParser::dischargeCommand() {
  DischargeCommandContext *_localctx = _tracker.createInstance<DischargeCommandContext>(_ctx, getState());
  enterRule(_localctx, 20, ReplCommandsParser::RuleDischargeCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(ReplCommandsParser::T__10);
    setState(82);
    object();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SearchCommandContext ------------------------------------------------------------------

ReplCommandsParser::SearchCommandContext::SearchCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ReplCommandsParser::ObjectContext* ReplCommandsParser::SearchCommandContext::object() {
  return getRuleContext<ReplCommandsParser::ObjectContext>(0);
}


size_t ReplCommandsParser::SearchCommandContext::getRuleIndex() const {
  return ReplCommandsParser::RuleSearchCommand;
}

void ReplCommandsParser::SearchCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearchCommand(this);
}

void ReplCommandsParser::SearchCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearchCommand(this);
}

ReplCommandsParser::SearchCommandContext* ReplCommandsParser::searchCommand() {
  SearchCommandContext *_localctx = _tracker.createInstance<SearchCommandContext>(_ctx, getState());
  enterRule(_localctx, 22, ReplCommandsParser::RuleSearchCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    match(ReplCommandsParser::T__11);
    setState(85);
    object();
   
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

ReplCommandsParser::KeyvalsContext* ReplCommandsParser::ObjectContext::keyvals() {
  return getRuleContext<ReplCommandsParser::KeyvalsContext>(0);
}


size_t ReplCommandsParser::ObjectContext::getRuleIndex() const {
  return ReplCommandsParser::RuleObject;
}

void ReplCommandsParser::ObjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject(this);
}

void ReplCommandsParser::ObjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject(this);
}

ReplCommandsParser::ObjectContext* ReplCommandsParser::object() {
  ObjectContext *_localctx = _tracker.createInstance<ObjectContext>(_ctx, getState());
  enterRule(_localctx, 24, ReplCommandsParser::RuleObject);
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
    setState(87);
    match(ReplCommandsParser::ID);
    setState(88);
    match(ReplCommandsParser::T__12);
    setState(90);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ReplCommandsParser::ID) {
      setState(89);
      keyvals();
    }
    setState(92);
    match(ReplCommandsParser::T__13);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyvalsContext ------------------------------------------------------------------

ReplCommandsParser::KeyvalsContext::KeyvalsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ReplCommandsParser::KeyvalContext *> ReplCommandsParser::KeyvalsContext::keyval() {
  return getRuleContexts<ReplCommandsParser::KeyvalContext>();
}

ReplCommandsParser::KeyvalContext* ReplCommandsParser::KeyvalsContext::keyval(size_t i) {
  return getRuleContext<ReplCommandsParser::KeyvalContext>(i);
}


size_t ReplCommandsParser::KeyvalsContext::getRuleIndex() const {
  return ReplCommandsParser::RuleKeyvals;
}

void ReplCommandsParser::KeyvalsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyvals(this);
}

void ReplCommandsParser::KeyvalsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyvals(this);
}

ReplCommandsParser::KeyvalsContext* ReplCommandsParser::keyvals() {
  KeyvalsContext *_localctx = _tracker.createInstance<KeyvalsContext>(_ctx, getState());
  enterRule(_localctx, 26, ReplCommandsParser::RuleKeyvals);
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
    setState(94);
    keyval();
    setState(99);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ReplCommandsParser::T__14) {
      setState(95);
      match(ReplCommandsParser::T__14);
      setState(96);
      keyval();
      setState(101);
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

void ReplCommandsParser::KeyvalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyval(this);
}

void ReplCommandsParser::KeyvalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyval(this);
}

ReplCommandsParser::KeyvalContext* ReplCommandsParser::keyval() {
  KeyvalContext *_localctx = _tracker.createInstance<KeyvalContext>(_ctx, getState());
  enterRule(_localctx, 28, ReplCommandsParser::RuleKeyval);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(ReplCommandsParser::ID);
    setState(103);
    match(ReplCommandsParser::T__15);
    setState(104);
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

void ReplCommandsParser::ValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVal(this);
}

void ReplCommandsParser::ValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVal(this);
}

ReplCommandsParser::ValContext* ReplCommandsParser::val() {
  ValContext *_localctx = _tracker.createInstance<ValContext>(_ctx, getState());
  enterRule(_localctx, 30, ReplCommandsParser::RuleVal);
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
    setState(106);
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

void ReplCommandsParser::MedlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMedlist(this);
}

void ReplCommandsParser::MedlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ReplCommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMedlist(this);
}

ReplCommandsParser::MedlistContext* ReplCommandsParser::medlist() {
  MedlistContext *_localctx = _tracker.createInstance<MedlistContext>(_ctx, getState());
  enterRule(_localctx, 32, ReplCommandsParser::RuleMedlist);
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
    setState(108);
    match(ReplCommandsParser::ID);
    setState(113);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ReplCommandsParser::T__14) {
      setState(109);
      match(ReplCommandsParser::T__14);
      setState(110);
      match(ReplCommandsParser::ID);
      setState(115);
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
