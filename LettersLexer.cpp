
// Generated from Letters.g4 by ANTLR 4.13.1


#include "LettersLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct LettersLexerStaticData final {
  LettersLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LettersLexerStaticData(const LettersLexerStaticData&) = delete;
  LettersLexerStaticData(LettersLexerStaticData&&) = delete;
  LettersLexerStaticData& operator=(const LettersLexerStaticData&) = delete;
  LettersLexerStaticData& operator=(LettersLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag letterslexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
LettersLexerStaticData *letterslexerLexerStaticData = nullptr;

void letterslexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (letterslexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(letterslexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LettersLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "PERIOD", "WS", "COMMENT", "IDENT", "INTLIT", "ESCAPE", 
      "CHARLIT", "STRLIT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'B'", "'N'", "'C'", "'V'", "'P'", "'I'", "'F'", "'R'", "'W'", 
      "'J'", "'A'", "'S'", "'M'", "'D'", "'Q'", "'U'", "'G'", "'L'", "'E'", 
      "'.'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "PERIOD", "WS", "COMMENT", "IDENT", "INTLIT", "ESCAPE", 
      "CHARLIT", "STRLIT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,27,130,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,1,0,1,1,1,
  	1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,
  	1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,
  	1,17,1,18,1,18,1,19,1,19,1,20,4,20,97,8,20,11,20,12,20,98,1,20,1,20,1,
  	21,1,21,4,21,105,8,21,11,21,12,21,106,1,21,1,21,1,22,1,22,1,23,1,23,1,
  	24,1,24,1,24,1,25,1,25,1,25,1,25,1,26,1,26,5,26,124,8,26,10,26,12,26,
  	127,9,26,1,26,1,26,0,0,27,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,
  	10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,
  	43,22,45,23,47,24,49,25,51,26,53,27,1,0,6,3,0,9,10,13,13,32,32,3,0,10,
  	10,13,13,126,126,5,0,9,10,13,13,32,32,48,57,65,90,1,0,48,57,2,0,110,110,
  	115,116,2,0,10,10,13,13,132,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,
  	0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,
  	0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,
  	1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,
  	0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,
  	0,51,1,0,0,0,0,53,1,0,0,0,1,55,1,0,0,0,3,57,1,0,0,0,5,59,1,0,0,0,7,61,
  	1,0,0,0,9,63,1,0,0,0,11,65,1,0,0,0,13,67,1,0,0,0,15,69,1,0,0,0,17,71,
  	1,0,0,0,19,73,1,0,0,0,21,75,1,0,0,0,23,77,1,0,0,0,25,79,1,0,0,0,27,81,
  	1,0,0,0,29,83,1,0,0,0,31,85,1,0,0,0,33,87,1,0,0,0,35,89,1,0,0,0,37,91,
  	1,0,0,0,39,93,1,0,0,0,41,96,1,0,0,0,43,102,1,0,0,0,45,110,1,0,0,0,47,
  	112,1,0,0,0,49,114,1,0,0,0,51,117,1,0,0,0,53,121,1,0,0,0,55,56,5,66,0,
  	0,56,2,1,0,0,0,57,58,5,78,0,0,58,4,1,0,0,0,59,60,5,67,0,0,60,6,1,0,0,
  	0,61,62,5,86,0,0,62,8,1,0,0,0,63,64,5,80,0,0,64,10,1,0,0,0,65,66,5,73,
  	0,0,66,12,1,0,0,0,67,68,5,70,0,0,68,14,1,0,0,0,69,70,5,82,0,0,70,16,1,
  	0,0,0,71,72,5,87,0,0,72,18,1,0,0,0,73,74,5,74,0,0,74,20,1,0,0,0,75,76,
  	5,65,0,0,76,22,1,0,0,0,77,78,5,83,0,0,78,24,1,0,0,0,79,80,5,77,0,0,80,
  	26,1,0,0,0,81,82,5,68,0,0,82,28,1,0,0,0,83,84,5,81,0,0,84,30,1,0,0,0,
  	85,86,5,85,0,0,86,32,1,0,0,0,87,88,5,71,0,0,88,34,1,0,0,0,89,90,5,76,
  	0,0,90,36,1,0,0,0,91,92,5,69,0,0,92,38,1,0,0,0,93,94,5,46,0,0,94,40,1,
  	0,0,0,95,97,7,0,0,0,96,95,1,0,0,0,97,98,1,0,0,0,98,96,1,0,0,0,98,99,1,
  	0,0,0,99,100,1,0,0,0,100,101,6,20,0,0,101,42,1,0,0,0,102,104,5,35,0,0,
  	103,105,7,1,0,0,104,103,1,0,0,0,105,106,1,0,0,0,106,104,1,0,0,0,106,107,
  	1,0,0,0,107,108,1,0,0,0,108,109,6,21,0,0,109,44,1,0,0,0,110,111,8,2,0,
  	0,111,46,1,0,0,0,112,113,7,3,0,0,113,48,1,0,0,0,114,115,5,88,0,0,115,
  	116,7,4,0,0,116,50,1,0,0,0,117,118,5,39,0,0,118,119,8,0,0,0,119,120,5,
  	39,0,0,120,52,1,0,0,0,121,125,5,34,0,0,122,124,8,5,0,0,123,122,1,0,0,
  	0,124,127,1,0,0,0,125,123,1,0,0,0,125,126,1,0,0,0,126,128,1,0,0,0,127,
  	125,1,0,0,0,128,129,5,34,0,0,129,54,1,0,0,0,4,0,98,106,125,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  letterslexerLexerStaticData = staticData.release();
}

}

LettersLexer::LettersLexer(CharStream *input) : Lexer(input) {
  LettersLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *letterslexerLexerStaticData->atn, letterslexerLexerStaticData->decisionToDFA, letterslexerLexerStaticData->sharedContextCache);
}

LettersLexer::~LettersLexer() {
  delete _interpreter;
}

std::string LettersLexer::getGrammarFileName() const {
  return "Letters.g4";
}

const std::vector<std::string>& LettersLexer::getRuleNames() const {
  return letterslexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& LettersLexer::getChannelNames() const {
  return letterslexerLexerStaticData->channelNames;
}

const std::vector<std::string>& LettersLexer::getModeNames() const {
  return letterslexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& LettersLexer::getVocabulary() const {
  return letterslexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LettersLexer::getSerializedATN() const {
  return letterslexerLexerStaticData->serializedATN;
}

const atn::ATN& LettersLexer::getATN() const {
  return *letterslexerLexerStaticData->atn;
}




void LettersLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  letterslexerLexerInitialize();
#else
  ::antlr4::internal::call_once(letterslexerLexerOnceFlag, letterslexerLexerInitialize);
#endif
}
