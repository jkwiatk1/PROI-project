
// Generated from ReplCommands.g4 by ANTLR 4.11.1


#include "ReplCommandsLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ReplCommandsLexerStaticData final {
  ReplCommandsLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ReplCommandsLexerStaticData(const ReplCommandsLexerStaticData&) = delete;
  ReplCommandsLexerStaticData(ReplCommandsLexerStaticData&&) = delete;
  ReplCommandsLexerStaticData& operator=(const ReplCommandsLexerStaticData&) = delete;
  ReplCommandsLexerStaticData& operator=(ReplCommandsLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag replcommandslexerLexerOnceFlag;
ReplCommandsLexerStaticData *replcommandslexerLexerStaticData = nullptr;

void replcommandslexerLexerInitialize() {
  assert(replcommandslexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<ReplCommandsLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "LF", 
      "ID", "DIGIT", "INT", "FLOAT", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,21,183,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,13,1,13,1,14,
  	1,14,1,15,1,15,1,16,3,16,148,8,16,1,16,1,16,1,17,1,17,5,17,154,8,17,10,
  	17,12,17,157,9,17,1,18,1,18,1,19,4,19,162,8,19,11,19,12,19,163,1,20,4,
  	20,167,8,20,11,20,12,20,168,1,20,1,20,4,20,173,8,20,11,20,12,20,174,1,
  	21,4,21,178,8,21,11,21,12,21,179,1,21,1,21,0,0,22,1,1,3,2,5,3,7,4,9,5,
  	11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,
  	18,37,0,39,19,41,20,43,21,1,0,4,3,0,65,90,95,95,97,122,5,0,45,45,48,57,
  	65,90,95,95,97,122,1,0,48,57,2,0,9,9,32,32,187,0,1,1,0,0,0,0,3,1,0,0,
  	0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,
  	1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,
  	0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,
  	0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,1,45,1,0,0,0,3,49,1,0,0,0,5,56,
  	1,0,0,0,7,63,1,0,0,0,9,71,1,0,0,0,11,81,1,0,0,0,13,86,1,0,0,0,15,97,1,
  	0,0,0,17,101,1,0,0,0,19,109,1,0,0,0,21,121,1,0,0,0,23,131,1,0,0,0,25,
  	138,1,0,0,0,27,140,1,0,0,0,29,142,1,0,0,0,31,144,1,0,0,0,33,147,1,0,0,
  	0,35,151,1,0,0,0,37,158,1,0,0,0,39,161,1,0,0,0,41,166,1,0,0,0,43,177,
  	1,0,0,0,45,46,5,97,0,0,46,47,5,100,0,0,47,48,5,100,0,0,48,2,1,0,0,0,49,
  	50,5,100,0,0,50,51,5,101,0,0,51,52,5,108,0,0,52,53,5,101,0,0,53,54,5,
  	116,0,0,54,55,5,101,0,0,55,4,1,0,0,0,56,57,5,117,0,0,57,58,5,112,0,0,
  	58,59,5,100,0,0,59,60,5,97,0,0,60,61,5,116,0,0,61,62,5,101,0,0,62,6,1,
  	0,0,0,63,64,5,101,0,0,64,65,5,120,0,0,65,66,5,97,0,0,66,67,5,109,0,0,
  	67,68,5,105,0,0,68,69,5,110,0,0,69,70,5,101,0,0,70,8,1,0,0,0,71,72,5,
  	112,0,0,72,73,5,114,0,0,73,74,5,101,0,0,74,75,5,115,0,0,75,76,5,99,0,
  	0,76,77,5,114,0,0,77,78,5,105,0,0,78,79,5,98,0,0,79,80,5,101,0,0,80,10,
  	1,0,0,0,81,82,5,109,0,0,82,83,5,101,0,0,83,84,5,100,0,0,84,85,5,115,0,
  	0,85,12,1,0,0,0,86,87,5,97,0,0,87,88,5,100,0,0,88,89,5,109,0,0,89,90,
  	5,105,0,0,90,91,5,110,0,0,91,92,5,105,0,0,92,93,5,115,0,0,93,94,5,116,
  	0,0,94,95,5,101,0,0,95,96,5,114,0,0,96,14,1,0,0,0,97,98,5,109,0,0,98,
  	99,5,101,0,0,99,100,5,100,0,0,100,16,1,0,0,0,101,102,5,115,0,0,102,103,
  	5,117,0,0,103,104,5,114,0,0,104,105,5,103,0,0,105,106,5,101,0,0,106,107,
  	5,114,0,0,107,108,5,121,0,0,108,18,1,0,0,0,109,110,5,104,0,0,110,111,
  	5,111,0,0,111,112,5,115,0,0,112,113,5,112,0,0,113,114,5,105,0,0,114,115,
  	5,116,0,0,115,116,5,97,0,0,116,117,5,108,0,0,117,118,5,105,0,0,118,119,
  	5,122,0,0,119,120,5,101,0,0,120,20,1,0,0,0,121,122,5,100,0,0,122,123,
  	5,105,0,0,123,124,5,115,0,0,124,125,5,99,0,0,125,126,5,104,0,0,126,127,
  	5,97,0,0,127,128,5,114,0,0,128,129,5,103,0,0,129,130,5,101,0,0,130,22,
  	1,0,0,0,131,132,5,115,0,0,132,133,5,101,0,0,133,134,5,97,0,0,134,135,
  	5,114,0,0,135,136,5,99,0,0,136,137,5,104,0,0,137,24,1,0,0,0,138,139,5,
  	123,0,0,139,26,1,0,0,0,140,141,5,125,0,0,141,28,1,0,0,0,142,143,5,44,
  	0,0,143,30,1,0,0,0,144,145,5,61,0,0,145,32,1,0,0,0,146,148,5,13,0,0,147,
  	146,1,0,0,0,147,148,1,0,0,0,148,149,1,0,0,0,149,150,5,10,0,0,150,34,1,
  	0,0,0,151,155,7,0,0,0,152,154,7,1,0,0,153,152,1,0,0,0,154,157,1,0,0,0,
  	155,153,1,0,0,0,155,156,1,0,0,0,156,36,1,0,0,0,157,155,1,0,0,0,158,159,
  	7,2,0,0,159,38,1,0,0,0,160,162,3,37,18,0,161,160,1,0,0,0,162,163,1,0,
  	0,0,163,161,1,0,0,0,163,164,1,0,0,0,164,40,1,0,0,0,165,167,3,37,18,0,
  	166,165,1,0,0,0,167,168,1,0,0,0,168,166,1,0,0,0,168,169,1,0,0,0,169,170,
  	1,0,0,0,170,172,5,46,0,0,171,173,3,37,18,0,172,171,1,0,0,0,173,174,1,
  	0,0,0,174,172,1,0,0,0,174,175,1,0,0,0,175,42,1,0,0,0,176,178,7,3,0,0,
  	177,176,1,0,0,0,178,179,1,0,0,0,179,177,1,0,0,0,179,180,1,0,0,0,180,181,
  	1,0,0,0,181,182,6,21,0,0,182,44,1,0,0,0,7,0,147,155,163,168,174,179,1,
  	6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  replcommandslexerLexerStaticData = staticData.release();
}

}

ReplCommandsLexer::ReplCommandsLexer(CharStream *input) : Lexer(input) {
  ReplCommandsLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *replcommandslexerLexerStaticData->atn, replcommandslexerLexerStaticData->decisionToDFA, replcommandslexerLexerStaticData->sharedContextCache);
}

ReplCommandsLexer::~ReplCommandsLexer() {
  delete _interpreter;
}

std::string ReplCommandsLexer::getGrammarFileName() const {
  return "ReplCommands.g4";
}

const std::vector<std::string>& ReplCommandsLexer::getRuleNames() const {
  return replcommandslexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ReplCommandsLexer::getChannelNames() const {
  return replcommandslexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ReplCommandsLexer::getModeNames() const {
  return replcommandslexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ReplCommandsLexer::getVocabulary() const {
  return replcommandslexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ReplCommandsLexer::getSerializedATN() const {
  return replcommandslexerLexerStaticData->serializedATN;
}

const atn::ATN& ReplCommandsLexer::getATN() const {
  return *replcommandslexerLexerStaticData->atn;
}




void ReplCommandsLexer::initialize() {
  ::antlr4::internal::call_once(replcommandslexerLexerOnceFlag, replcommandslexerLexerInitialize);
}