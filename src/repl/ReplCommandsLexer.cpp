
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
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "LF", "ID", "DIGIT", "INT", "FLOAT", "STRING", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'add'", "'delete'", "'update'", "'examine'", "'prescribe'", "'meds'", 
      "'administer'", "'med'", "'surgery'", "'hospitalize'", "'reason'", 
      "'assign_room'", "'number'", "'discharge'", "'search'", "'{'", "'}'", 
      "','", "'='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "LF", "ID", "INT", "FLOAT", "STRING", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,25,226,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,1,0,1,0,1,0,1,0,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,
  	1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,3,19,182,8,19,1,19,
  	1,19,1,20,1,20,5,20,188,8,20,10,20,12,20,191,9,20,1,21,1,21,1,22,4,22,
  	196,8,22,11,22,12,22,197,1,23,4,23,201,8,23,11,23,12,23,202,1,23,1,23,
  	4,23,207,8,23,11,23,12,23,208,1,24,1,24,5,24,213,8,24,10,24,12,24,216,
  	9,24,1,24,1,24,1,25,4,25,221,8,25,11,25,12,25,222,1,25,1,25,1,214,0,26,
  	1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,
  	29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,0,45,22,47,23,49,24,51,25,
  	1,0,4,3,0,65,90,95,95,97,122,5,0,45,45,48,57,65,90,95,95,97,122,1,0,48,
  	57,2,0,9,9,32,32,231,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,
  	0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,
  	1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,
  	0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,
  	0,41,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,1,53,
  	1,0,0,0,3,57,1,0,0,0,5,64,1,0,0,0,7,71,1,0,0,0,9,79,1,0,0,0,11,89,1,0,
  	0,0,13,94,1,0,0,0,15,105,1,0,0,0,17,109,1,0,0,0,19,117,1,0,0,0,21,129,
  	1,0,0,0,23,136,1,0,0,0,25,148,1,0,0,0,27,155,1,0,0,0,29,165,1,0,0,0,31,
  	172,1,0,0,0,33,174,1,0,0,0,35,176,1,0,0,0,37,178,1,0,0,0,39,181,1,0,0,
  	0,41,185,1,0,0,0,43,192,1,0,0,0,45,195,1,0,0,0,47,200,1,0,0,0,49,210,
  	1,0,0,0,51,220,1,0,0,0,53,54,5,97,0,0,54,55,5,100,0,0,55,56,5,100,0,0,
  	56,2,1,0,0,0,57,58,5,100,0,0,58,59,5,101,0,0,59,60,5,108,0,0,60,61,5,
  	101,0,0,61,62,5,116,0,0,62,63,5,101,0,0,63,4,1,0,0,0,64,65,5,117,0,0,
  	65,66,5,112,0,0,66,67,5,100,0,0,67,68,5,97,0,0,68,69,5,116,0,0,69,70,
  	5,101,0,0,70,6,1,0,0,0,71,72,5,101,0,0,72,73,5,120,0,0,73,74,5,97,0,0,
  	74,75,5,109,0,0,75,76,5,105,0,0,76,77,5,110,0,0,77,78,5,101,0,0,78,8,
  	1,0,0,0,79,80,5,112,0,0,80,81,5,114,0,0,81,82,5,101,0,0,82,83,5,115,0,
  	0,83,84,5,99,0,0,84,85,5,114,0,0,85,86,5,105,0,0,86,87,5,98,0,0,87,88,
  	5,101,0,0,88,10,1,0,0,0,89,90,5,109,0,0,90,91,5,101,0,0,91,92,5,100,0,
  	0,92,93,5,115,0,0,93,12,1,0,0,0,94,95,5,97,0,0,95,96,5,100,0,0,96,97,
  	5,109,0,0,97,98,5,105,0,0,98,99,5,110,0,0,99,100,5,105,0,0,100,101,5,
  	115,0,0,101,102,5,116,0,0,102,103,5,101,0,0,103,104,5,114,0,0,104,14,
  	1,0,0,0,105,106,5,109,0,0,106,107,5,101,0,0,107,108,5,100,0,0,108,16,
  	1,0,0,0,109,110,5,115,0,0,110,111,5,117,0,0,111,112,5,114,0,0,112,113,
  	5,103,0,0,113,114,5,101,0,0,114,115,5,114,0,0,115,116,5,121,0,0,116,18,
  	1,0,0,0,117,118,5,104,0,0,118,119,5,111,0,0,119,120,5,115,0,0,120,121,
  	5,112,0,0,121,122,5,105,0,0,122,123,5,116,0,0,123,124,5,97,0,0,124,125,
  	5,108,0,0,125,126,5,105,0,0,126,127,5,122,0,0,127,128,5,101,0,0,128,20,
  	1,0,0,0,129,130,5,114,0,0,130,131,5,101,0,0,131,132,5,97,0,0,132,133,
  	5,115,0,0,133,134,5,111,0,0,134,135,5,110,0,0,135,22,1,0,0,0,136,137,
  	5,97,0,0,137,138,5,115,0,0,138,139,5,115,0,0,139,140,5,105,0,0,140,141,
  	5,103,0,0,141,142,5,110,0,0,142,143,5,95,0,0,143,144,5,114,0,0,144,145,
  	5,111,0,0,145,146,5,111,0,0,146,147,5,109,0,0,147,24,1,0,0,0,148,149,
  	5,110,0,0,149,150,5,117,0,0,150,151,5,109,0,0,151,152,5,98,0,0,152,153,
  	5,101,0,0,153,154,5,114,0,0,154,26,1,0,0,0,155,156,5,100,0,0,156,157,
  	5,105,0,0,157,158,5,115,0,0,158,159,5,99,0,0,159,160,5,104,0,0,160,161,
  	5,97,0,0,161,162,5,114,0,0,162,163,5,103,0,0,163,164,5,101,0,0,164,28,
  	1,0,0,0,165,166,5,115,0,0,166,167,5,101,0,0,167,168,5,97,0,0,168,169,
  	5,114,0,0,169,170,5,99,0,0,170,171,5,104,0,0,171,30,1,0,0,0,172,173,5,
  	123,0,0,173,32,1,0,0,0,174,175,5,125,0,0,175,34,1,0,0,0,176,177,5,44,
  	0,0,177,36,1,0,0,0,178,179,5,61,0,0,179,38,1,0,0,0,180,182,5,13,0,0,181,
  	180,1,0,0,0,181,182,1,0,0,0,182,183,1,0,0,0,183,184,5,10,0,0,184,40,1,
  	0,0,0,185,189,7,0,0,0,186,188,7,1,0,0,187,186,1,0,0,0,188,191,1,0,0,0,
  	189,187,1,0,0,0,189,190,1,0,0,0,190,42,1,0,0,0,191,189,1,0,0,0,192,193,
  	7,2,0,0,193,44,1,0,0,0,194,196,3,43,21,0,195,194,1,0,0,0,196,197,1,0,
  	0,0,197,195,1,0,0,0,197,198,1,0,0,0,198,46,1,0,0,0,199,201,3,43,21,0,
  	200,199,1,0,0,0,201,202,1,0,0,0,202,200,1,0,0,0,202,203,1,0,0,0,203,204,
  	1,0,0,0,204,206,5,46,0,0,205,207,3,43,21,0,206,205,1,0,0,0,207,208,1,
  	0,0,0,208,206,1,0,0,0,208,209,1,0,0,0,209,48,1,0,0,0,210,214,5,34,0,0,
  	211,213,9,0,0,0,212,211,1,0,0,0,213,216,1,0,0,0,214,215,1,0,0,0,214,212,
  	1,0,0,0,215,217,1,0,0,0,216,214,1,0,0,0,217,218,5,34,0,0,218,50,1,0,0,
  	0,219,221,7,3,0,0,220,219,1,0,0,0,221,222,1,0,0,0,222,220,1,0,0,0,222,
  	223,1,0,0,0,223,224,1,0,0,0,224,225,6,25,0,0,225,52,1,0,0,0,8,0,181,189,
  	197,202,208,214,222,1,6,0,0
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
