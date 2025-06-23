
// Generated from Letters.g4 by ANTLR 4.13.1


#include "LettersVisitor.h"

#include "LettersParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct LettersParserStaticData final {
  LettersParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LettersParserStaticData(const LettersParserStaticData&) = delete;
  LettersParserStaticData(LettersParserStaticData&&) = delete;
  LettersParserStaticData& operator=(const LettersParserStaticData&) = delete;
  LettersParserStaticData& operator=(LettersParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag lettersParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
LettersParserStaticData *lettersParserStaticData = nullptr;

void lettersParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (lettersParserStaticData != nullptr) {
    return;
  }
#else
  assert(lettersParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LettersParserStaticData>(
    std::vector<std::string>{
      "program", "declList", "decl", "stmtList", "stmt", "ifStmt", "assignStmt", 
      "readStmt", "writeStmt", "jumpStmt", "expr", "addSubExpr", "mulDivExpr", 
      "equalsExpr", "compExpr", "atomExpr", "assignExpr", "vecIndexExpr", 
      "term", "local", "vecLit"
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
  	4,1,27,173,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,1,
  	0,5,0,45,8,0,10,0,12,0,48,9,0,1,0,1,0,1,1,4,1,53,8,1,11,1,12,1,54,1,2,
  	1,2,1,2,3,2,60,8,2,1,2,1,2,1,3,4,3,65,8,3,11,3,12,3,66,1,4,1,4,1,4,1,
  	4,1,4,3,4,74,8,4,1,5,1,5,1,5,1,5,4,5,80,8,5,11,5,12,5,81,1,5,1,5,1,6,
  	1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,3,8,99,8,8,1,8,1,8,1,
  	9,1,9,1,9,1,9,1,10,1,10,1,11,1,11,1,11,5,11,112,8,11,10,11,12,11,115,
  	9,11,1,12,1,12,1,12,5,12,120,8,12,10,12,12,12,123,9,12,1,13,1,13,1,13,
  	5,13,128,8,13,10,13,12,13,131,9,13,1,14,1,14,1,14,5,14,136,8,14,10,14,
  	12,14,139,9,14,1,15,1,15,1,15,3,15,144,8,15,1,16,1,16,1,16,1,16,1,17,
  	1,17,1,17,3,17,153,8,17,1,18,1,18,1,18,1,18,1,18,3,18,160,8,18,1,19,1,
  	19,1,20,1,20,1,20,1,20,1,20,4,20,169,8,20,11,20,12,20,170,1,20,0,0,21,
  	0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,0,5,1,0,1,5,
  	1,0,11,12,1,0,13,14,1,0,15,16,1,0,17,18,181,0,46,1,0,0,0,2,52,1,0,0,0,
  	4,56,1,0,0,0,6,64,1,0,0,0,8,73,1,0,0,0,10,75,1,0,0,0,12,85,1,0,0,0,14,
  	88,1,0,0,0,16,92,1,0,0,0,18,102,1,0,0,0,20,106,1,0,0,0,22,108,1,0,0,0,
  	24,116,1,0,0,0,26,124,1,0,0,0,28,132,1,0,0,0,30,143,1,0,0,0,32,145,1,
  	0,0,0,34,149,1,0,0,0,36,159,1,0,0,0,38,161,1,0,0,0,40,168,1,0,0,0,42,
  	45,3,6,3,0,43,45,3,2,1,0,44,42,1,0,0,0,44,43,1,0,0,0,45,48,1,0,0,0,46,
  	44,1,0,0,0,46,47,1,0,0,0,47,49,1,0,0,0,48,46,1,0,0,0,49,50,5,0,0,1,50,
  	1,1,0,0,0,51,53,3,4,2,0,52,51,1,0,0,0,53,54,1,0,0,0,54,52,1,0,0,0,54,
  	55,1,0,0,0,55,3,1,0,0,0,56,59,7,0,0,0,57,60,5,23,0,0,58,60,3,32,16,0,
  	59,57,1,0,0,0,59,58,1,0,0,0,60,61,1,0,0,0,61,62,5,20,0,0,62,5,1,0,0,0,
  	63,65,3,8,4,0,64,63,1,0,0,0,65,66,1,0,0,0,66,64,1,0,0,0,66,67,1,0,0,0,
  	67,7,1,0,0,0,68,74,3,10,5,0,69,74,3,12,6,0,70,74,3,14,7,0,71,74,3,16,
  	8,0,72,74,3,18,9,0,73,68,1,0,0,0,73,69,1,0,0,0,73,70,1,0,0,0,73,71,1,
  	0,0,0,73,72,1,0,0,0,74,9,1,0,0,0,75,76,5,6,0,0,76,77,3,20,10,0,77,79,
  	5,7,0,0,78,80,3,6,3,0,79,78,1,0,0,0,80,81,1,0,0,0,81,79,1,0,0,0,81,82,
  	1,0,0,0,82,83,1,0,0,0,83,84,5,7,0,0,84,11,1,0,0,0,85,86,3,32,16,0,86,
  	87,5,20,0,0,87,13,1,0,0,0,88,89,5,8,0,0,89,90,3,38,19,0,90,91,5,20,0,
  	0,91,15,1,0,0,0,92,98,5,9,0,0,93,99,5,24,0,0,94,99,5,26,0,0,95,99,5,25,
  	0,0,96,99,3,40,20,0,97,99,3,38,19,0,98,93,1,0,0,0,98,94,1,0,0,0,98,95,
  	1,0,0,0,98,96,1,0,0,0,98,97,1,0,0,0,99,100,1,0,0,0,100,101,5,20,0,0,101,
  	17,1,0,0,0,102,103,5,10,0,0,103,104,5,23,0,0,104,105,5,20,0,0,105,19,
  	1,0,0,0,106,107,3,22,11,0,107,21,1,0,0,0,108,113,3,24,12,0,109,110,7,
  	1,0,0,110,112,3,24,12,0,111,109,1,0,0,0,112,115,1,0,0,0,113,111,1,0,0,
  	0,113,114,1,0,0,0,114,23,1,0,0,0,115,113,1,0,0,0,116,121,3,26,13,0,117,
  	118,7,2,0,0,118,120,3,26,13,0,119,117,1,0,0,0,120,123,1,0,0,0,121,119,
  	1,0,0,0,121,122,1,0,0,0,122,25,1,0,0,0,123,121,1,0,0,0,124,129,3,28,14,
  	0,125,126,7,3,0,0,126,128,3,28,14,0,127,125,1,0,0,0,128,131,1,0,0,0,129,
  	127,1,0,0,0,129,130,1,0,0,0,130,27,1,0,0,0,131,129,1,0,0,0,132,137,3,
  	30,15,0,133,134,7,4,0,0,134,136,3,30,15,0,135,133,1,0,0,0,136,139,1,0,
  	0,0,137,135,1,0,0,0,137,138,1,0,0,0,138,29,1,0,0,0,139,137,1,0,0,0,140,
  	144,3,32,16,0,141,144,3,34,17,0,142,144,3,36,18,0,143,140,1,0,0,0,143,
  	141,1,0,0,0,143,142,1,0,0,0,144,31,1,0,0,0,145,146,3,36,18,0,146,147,
  	5,19,0,0,147,148,3,20,10,0,148,33,1,0,0,0,149,152,3,38,19,0,150,153,5,
  	24,0,0,151,153,3,38,19,0,152,150,1,0,0,0,152,151,1,0,0,0,153,35,1,0,0,
  	0,154,160,3,38,19,0,155,160,5,24,0,0,156,160,5,26,0,0,157,160,5,25,0,
  	0,158,160,3,40,20,0,159,154,1,0,0,0,159,155,1,0,0,0,159,156,1,0,0,0,159,
  	157,1,0,0,0,159,158,1,0,0,0,160,37,1,0,0,0,161,162,5,23,0,0,162,39,1,
  	0,0,0,163,169,5,24,0,0,164,169,5,26,0,0,165,169,5,25,0,0,166,169,3,38,
  	19,0,167,169,5,27,0,0,168,163,1,0,0,0,168,164,1,0,0,0,168,165,1,0,0,0,
  	168,166,1,0,0,0,168,167,1,0,0,0,169,170,1,0,0,0,170,168,1,0,0,0,170,171,
  	1,0,0,0,171,41,1,0,0,0,17,44,46,54,59,66,73,81,98,113,121,129,137,143,
  	152,159,168,170
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  lettersParserStaticData = staticData.release();
}

}

LettersParser::LettersParser(TokenStream *input) : LettersParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

LettersParser::LettersParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  LettersParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *lettersParserStaticData->atn, lettersParserStaticData->decisionToDFA, lettersParserStaticData->sharedContextCache, options);
}

LettersParser::~LettersParser() {
  delete _interpreter;
}

const atn::ATN& LettersParser::getATN() const {
  return *lettersParserStaticData->atn;
}

std::string LettersParser::getGrammarFileName() const {
  return "Letters.g4";
}

const std::vector<std::string>& LettersParser::getRuleNames() const {
  return lettersParserStaticData->ruleNames;
}

const dfa::Vocabulary& LettersParser::getVocabulary() const {
  return lettersParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LettersParser::getSerializedATN() const {
  return lettersParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

LettersParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LettersParser::ProgramContext::EOF() {
  return getToken(LettersParser::EOF, 0);
}

std::vector<LettersParser::StmtListContext *> LettersParser::ProgramContext::stmtList() {
  return getRuleContexts<LettersParser::StmtListContext>();
}

LettersParser::StmtListContext* LettersParser::ProgramContext::stmtList(size_t i) {
  return getRuleContext<LettersParser::StmtListContext>(i);
}

std::vector<LettersParser::DeclListContext *> LettersParser::ProgramContext::declList() {
  return getRuleContexts<LettersParser::DeclListContext>();
}

LettersParser::DeclListContext* LettersParser::ProgramContext::declList(size_t i) {
  return getRuleContext<LettersParser::DeclListContext>(i);
}


size_t LettersParser::ProgramContext::getRuleIndex() const {
  return LettersParser::RuleProgram;
}


std::any LettersParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::ProgramContext* LettersParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, LettersParser::RuleProgram);
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
    setState(46);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 260048766) != 0)) {
      setState(44);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LettersParser::T__5:
        case LettersParser::T__7:
        case LettersParser::T__8:
        case LettersParser::T__9:
        case LettersParser::IDENT:
        case LettersParser::INTLIT:
        case LettersParser::ESCAPE:
        case LettersParser::CHARLIT:
        case LettersParser::STRLIT: {
          setState(42);
          stmtList();
          break;
        }

        case LettersParser::T__0:
        case LettersParser::T__1:
        case LettersParser::T__2:
        case LettersParser::T__3:
        case LettersParser::T__4: {
          setState(43);
          declList();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(48);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(49);
    match(LettersParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclListContext ------------------------------------------------------------------

LettersParser::DeclListContext::DeclListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LettersParser::DeclContext *> LettersParser::DeclListContext::decl() {
  return getRuleContexts<LettersParser::DeclContext>();
}

LettersParser::DeclContext* LettersParser::DeclListContext::decl(size_t i) {
  return getRuleContext<LettersParser::DeclContext>(i);
}


size_t LettersParser::DeclListContext::getRuleIndex() const {
  return LettersParser::RuleDeclList;
}


std::any LettersParser::DeclListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitDeclList(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::DeclListContext* LettersParser::declList() {
  DeclListContext *_localctx = _tracker.createInstance<DeclListContext>(_ctx, getState());
  enterRule(_localctx, 2, LettersParser::RuleDeclList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(52); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(51);
              decl();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(54); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

LettersParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LettersParser::DeclContext::PERIOD() {
  return getToken(LettersParser::PERIOD, 0);
}

tree::TerminalNode* LettersParser::DeclContext::IDENT() {
  return getToken(LettersParser::IDENT, 0);
}

LettersParser::AssignExprContext* LettersParser::DeclContext::assignExpr() {
  return getRuleContext<LettersParser::AssignExprContext>(0);
}


size_t LettersParser::DeclContext::getRuleIndex() const {
  return LettersParser::RuleDecl;
}


std::any LettersParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::DeclContext* LettersParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 4, LettersParser::RuleDecl);
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
    setState(56);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 62) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(59);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(57);
      match(LettersParser::IDENT);
      break;
    }

    case 2: {
      setState(58);
      assignExpr();
      break;
    }

    default:
      break;
    }
    setState(61);
    match(LettersParser::PERIOD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtListContext ------------------------------------------------------------------

LettersParser::StmtListContext::StmtListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LettersParser::StmtContext *> LettersParser::StmtListContext::stmt() {
  return getRuleContexts<LettersParser::StmtContext>();
}

LettersParser::StmtContext* LettersParser::StmtListContext::stmt(size_t i) {
  return getRuleContext<LettersParser::StmtContext>(i);
}


size_t LettersParser::StmtListContext::getRuleIndex() const {
  return LettersParser::RuleStmtList;
}


std::any LettersParser::StmtListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitStmtList(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::StmtListContext* LettersParser::stmtList() {
  StmtListContext *_localctx = _tracker.createInstance<StmtListContext>(_ctx, getState());
  enterRule(_localctx, 6, LettersParser::RuleStmtList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(64); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(63);
              stmt();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(66); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

LettersParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LettersParser::IfStmtContext* LettersParser::StmtContext::ifStmt() {
  return getRuleContext<LettersParser::IfStmtContext>(0);
}

LettersParser::AssignStmtContext* LettersParser::StmtContext::assignStmt() {
  return getRuleContext<LettersParser::AssignStmtContext>(0);
}

LettersParser::ReadStmtContext* LettersParser::StmtContext::readStmt() {
  return getRuleContext<LettersParser::ReadStmtContext>(0);
}

LettersParser::WriteStmtContext* LettersParser::StmtContext::writeStmt() {
  return getRuleContext<LettersParser::WriteStmtContext>(0);
}

LettersParser::JumpStmtContext* LettersParser::StmtContext::jumpStmt() {
  return getRuleContext<LettersParser::JumpStmtContext>(0);
}


size_t LettersParser::StmtContext::getRuleIndex() const {
  return LettersParser::RuleStmt;
}


std::any LettersParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::StmtContext* LettersParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 8, LettersParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(73);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LettersParser::T__5: {
        enterOuterAlt(_localctx, 1);
        setState(68);
        ifStmt();
        break;
      }

      case LettersParser::IDENT:
      case LettersParser::INTLIT:
      case LettersParser::ESCAPE:
      case LettersParser::CHARLIT:
      case LettersParser::STRLIT: {
        enterOuterAlt(_localctx, 2);
        setState(69);
        assignStmt();
        break;
      }

      case LettersParser::T__7: {
        enterOuterAlt(_localctx, 3);
        setState(70);
        readStmt();
        break;
      }

      case LettersParser::T__8: {
        enterOuterAlt(_localctx, 4);
        setState(71);
        writeStmt();
        break;
      }

      case LettersParser::T__9: {
        enterOuterAlt(_localctx, 5);
        setState(72);
        jumpStmt();
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

//----------------- IfStmtContext ------------------------------------------------------------------

LettersParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LettersParser::ExprContext* LettersParser::IfStmtContext::expr() {
  return getRuleContext<LettersParser::ExprContext>(0);
}

std::vector<LettersParser::StmtListContext *> LettersParser::IfStmtContext::stmtList() {
  return getRuleContexts<LettersParser::StmtListContext>();
}

LettersParser::StmtListContext* LettersParser::IfStmtContext::stmtList(size_t i) {
  return getRuleContext<LettersParser::StmtListContext>(i);
}


size_t LettersParser::IfStmtContext::getRuleIndex() const {
  return LettersParser::RuleIfStmt;
}


std::any LettersParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::IfStmtContext* LettersParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 10, LettersParser::RuleIfStmt);
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
    setState(75);
    match(LettersParser::T__5);
    setState(76);
    expr();
    setState(77);
    match(LettersParser::T__6);
    setState(79); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(78);
      stmtList();
      setState(81); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 260048704) != 0));
    setState(83);
    match(LettersParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignStmtContext ------------------------------------------------------------------

LettersParser::AssignStmtContext::AssignStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LettersParser::AssignExprContext* LettersParser::AssignStmtContext::assignExpr() {
  return getRuleContext<LettersParser::AssignExprContext>(0);
}

tree::TerminalNode* LettersParser::AssignStmtContext::PERIOD() {
  return getToken(LettersParser::PERIOD, 0);
}


size_t LettersParser::AssignStmtContext::getRuleIndex() const {
  return LettersParser::RuleAssignStmt;
}


std::any LettersParser::AssignStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitAssignStmt(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::AssignStmtContext* LettersParser::assignStmt() {
  AssignStmtContext *_localctx = _tracker.createInstance<AssignStmtContext>(_ctx, getState());
  enterRule(_localctx, 12, LettersParser::RuleAssignStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    assignExpr();
    setState(86);
    match(LettersParser::PERIOD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReadStmtContext ------------------------------------------------------------------

LettersParser::ReadStmtContext::ReadStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LettersParser::LocalContext* LettersParser::ReadStmtContext::local() {
  return getRuleContext<LettersParser::LocalContext>(0);
}

tree::TerminalNode* LettersParser::ReadStmtContext::PERIOD() {
  return getToken(LettersParser::PERIOD, 0);
}


size_t LettersParser::ReadStmtContext::getRuleIndex() const {
  return LettersParser::RuleReadStmt;
}


std::any LettersParser::ReadStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitReadStmt(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::ReadStmtContext* LettersParser::readStmt() {
  ReadStmtContext *_localctx = _tracker.createInstance<ReadStmtContext>(_ctx, getState());
  enterRule(_localctx, 14, LettersParser::RuleReadStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(LettersParser::T__7);
    setState(89);
    local();
    setState(90);
    match(LettersParser::PERIOD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WriteStmtContext ------------------------------------------------------------------

LettersParser::WriteStmtContext::WriteStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LettersParser::WriteStmtContext::PERIOD() {
  return getToken(LettersParser::PERIOD, 0);
}

tree::TerminalNode* LettersParser::WriteStmtContext::INTLIT() {
  return getToken(LettersParser::INTLIT, 0);
}

tree::TerminalNode* LettersParser::WriteStmtContext::CHARLIT() {
  return getToken(LettersParser::CHARLIT, 0);
}

tree::TerminalNode* LettersParser::WriteStmtContext::ESCAPE() {
  return getToken(LettersParser::ESCAPE, 0);
}

LettersParser::VecLitContext* LettersParser::WriteStmtContext::vecLit() {
  return getRuleContext<LettersParser::VecLitContext>(0);
}

LettersParser::LocalContext* LettersParser::WriteStmtContext::local() {
  return getRuleContext<LettersParser::LocalContext>(0);
}


size_t LettersParser::WriteStmtContext::getRuleIndex() const {
  return LettersParser::RuleWriteStmt;
}


std::any LettersParser::WriteStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitWriteStmt(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::WriteStmtContext* LettersParser::writeStmt() {
  WriteStmtContext *_localctx = _tracker.createInstance<WriteStmtContext>(_ctx, getState());
  enterRule(_localctx, 16, LettersParser::RuleWriteStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(LettersParser::T__8);
    setState(98);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(93);
      match(LettersParser::INTLIT);
      break;
    }

    case 2: {
      setState(94);
      match(LettersParser::CHARLIT);
      break;
    }

    case 3: {
      setState(95);
      match(LettersParser::ESCAPE);
      break;
    }

    case 4: {
      setState(96);
      vecLit();
      break;
    }

    case 5: {
      setState(97);
      local();
      break;
    }

    default:
      break;
    }
    setState(100);
    match(LettersParser::PERIOD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpStmtContext ------------------------------------------------------------------

LettersParser::JumpStmtContext::JumpStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LettersParser::JumpStmtContext::IDENT() {
  return getToken(LettersParser::IDENT, 0);
}

tree::TerminalNode* LettersParser::JumpStmtContext::PERIOD() {
  return getToken(LettersParser::PERIOD, 0);
}


size_t LettersParser::JumpStmtContext::getRuleIndex() const {
  return LettersParser::RuleJumpStmt;
}


std::any LettersParser::JumpStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitJumpStmt(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::JumpStmtContext* LettersParser::jumpStmt() {
  JumpStmtContext *_localctx = _tracker.createInstance<JumpStmtContext>(_ctx, getState());
  enterRule(_localctx, 18, LettersParser::RuleJumpStmt);

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
    match(LettersParser::T__9);
    setState(103);
    match(LettersParser::IDENT);
    setState(104);
    match(LettersParser::PERIOD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

LettersParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LettersParser::AddSubExprContext* LettersParser::ExprContext::addSubExpr() {
  return getRuleContext<LettersParser::AddSubExprContext>(0);
}


size_t LettersParser::ExprContext::getRuleIndex() const {
  return LettersParser::RuleExpr;
}


std::any LettersParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::ExprContext* LettersParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 20, LettersParser::RuleExpr);

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
    addSubExpr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddSubExprContext ------------------------------------------------------------------

LettersParser::AddSubExprContext::AddSubExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LettersParser::MulDivExprContext *> LettersParser::AddSubExprContext::mulDivExpr() {
  return getRuleContexts<LettersParser::MulDivExprContext>();
}

LettersParser::MulDivExprContext* LettersParser::AddSubExprContext::mulDivExpr(size_t i) {
  return getRuleContext<LettersParser::MulDivExprContext>(i);
}


size_t LettersParser::AddSubExprContext::getRuleIndex() const {
  return LettersParser::RuleAddSubExpr;
}


std::any LettersParser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::AddSubExprContext* LettersParser::addSubExpr() {
  AddSubExprContext *_localctx = _tracker.createInstance<AddSubExprContext>(_ctx, getState());
  enterRule(_localctx, 22, LettersParser::RuleAddSubExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(108);
    mulDivExpr();
    setState(113);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(109);
        _la = _input->LA(1);
        if (!(_la == LettersParser::T__10

        || _la == LettersParser::T__11)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(110);
        mulDivExpr(); 
      }
      setState(115);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulDivExprContext ------------------------------------------------------------------

LettersParser::MulDivExprContext::MulDivExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LettersParser::EqualsExprContext *> LettersParser::MulDivExprContext::equalsExpr() {
  return getRuleContexts<LettersParser::EqualsExprContext>();
}

LettersParser::EqualsExprContext* LettersParser::MulDivExprContext::equalsExpr(size_t i) {
  return getRuleContext<LettersParser::EqualsExprContext>(i);
}


size_t LettersParser::MulDivExprContext::getRuleIndex() const {
  return LettersParser::RuleMulDivExpr;
}


std::any LettersParser::MulDivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitMulDivExpr(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::MulDivExprContext* LettersParser::mulDivExpr() {
  MulDivExprContext *_localctx = _tracker.createInstance<MulDivExprContext>(_ctx, getState());
  enterRule(_localctx, 24, LettersParser::RuleMulDivExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(116);
    equalsExpr();
    setState(121);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(117);
        _la = _input->LA(1);
        if (!(_la == LettersParser::T__12

        || _la == LettersParser::T__13)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(118);
        equalsExpr(); 
      }
      setState(123);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualsExprContext ------------------------------------------------------------------

LettersParser::EqualsExprContext::EqualsExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LettersParser::CompExprContext *> LettersParser::EqualsExprContext::compExpr() {
  return getRuleContexts<LettersParser::CompExprContext>();
}

LettersParser::CompExprContext* LettersParser::EqualsExprContext::compExpr(size_t i) {
  return getRuleContext<LettersParser::CompExprContext>(i);
}


size_t LettersParser::EqualsExprContext::getRuleIndex() const {
  return LettersParser::RuleEqualsExpr;
}


std::any LettersParser::EqualsExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitEqualsExpr(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::EqualsExprContext* LettersParser::equalsExpr() {
  EqualsExprContext *_localctx = _tracker.createInstance<EqualsExprContext>(_ctx, getState());
  enterRule(_localctx, 26, LettersParser::RuleEqualsExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(124);
    compExpr();
    setState(129);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(125);
        _la = _input->LA(1);
        if (!(_la == LettersParser::T__14

        || _la == LettersParser::T__15)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(126);
        compExpr(); 
      }
      setState(131);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompExprContext ------------------------------------------------------------------

LettersParser::CompExprContext::CompExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LettersParser::AtomExprContext *> LettersParser::CompExprContext::atomExpr() {
  return getRuleContexts<LettersParser::AtomExprContext>();
}

LettersParser::AtomExprContext* LettersParser::CompExprContext::atomExpr(size_t i) {
  return getRuleContext<LettersParser::AtomExprContext>(i);
}


size_t LettersParser::CompExprContext::getRuleIndex() const {
  return LettersParser::RuleCompExpr;
}


std::any LettersParser::CompExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitCompExpr(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::CompExprContext* LettersParser::compExpr() {
  CompExprContext *_localctx = _tracker.createInstance<CompExprContext>(_ctx, getState());
  enterRule(_localctx, 28, LettersParser::RuleCompExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(132);
    atomExpr();
    setState(137);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(133);
        _la = _input->LA(1);
        if (!(_la == LettersParser::T__16

        || _la == LettersParser::T__17)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(134);
        atomExpr(); 
      }
      setState(139);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomExprContext ------------------------------------------------------------------

LettersParser::AtomExprContext::AtomExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LettersParser::AssignExprContext* LettersParser::AtomExprContext::assignExpr() {
  return getRuleContext<LettersParser::AssignExprContext>(0);
}

LettersParser::VecIndexExprContext* LettersParser::AtomExprContext::vecIndexExpr() {
  return getRuleContext<LettersParser::VecIndexExprContext>(0);
}

LettersParser::TermContext* LettersParser::AtomExprContext::term() {
  return getRuleContext<LettersParser::TermContext>(0);
}


size_t LettersParser::AtomExprContext::getRuleIndex() const {
  return LettersParser::RuleAtomExpr;
}


std::any LettersParser::AtomExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitAtomExpr(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::AtomExprContext* LettersParser::atomExpr() {
  AtomExprContext *_localctx = _tracker.createInstance<AtomExprContext>(_ctx, getState());
  enterRule(_localctx, 30, LettersParser::RuleAtomExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(143);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(140);
      assignExpr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(141);
      vecIndexExpr();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(142);
      term();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignExprContext ------------------------------------------------------------------

LettersParser::AssignExprContext::AssignExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LettersParser::TermContext* LettersParser::AssignExprContext::term() {
  return getRuleContext<LettersParser::TermContext>(0);
}

LettersParser::ExprContext* LettersParser::AssignExprContext::expr() {
  return getRuleContext<LettersParser::ExprContext>(0);
}


size_t LettersParser::AssignExprContext::getRuleIndex() const {
  return LettersParser::RuleAssignExpr;
}


std::any LettersParser::AssignExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitAssignExpr(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::AssignExprContext* LettersParser::assignExpr() {
  AssignExprContext *_localctx = _tracker.createInstance<AssignExprContext>(_ctx, getState());
  enterRule(_localctx, 32, LettersParser::RuleAssignExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    term();
    setState(146);
    match(LettersParser::T__18);
    setState(147);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VecIndexExprContext ------------------------------------------------------------------

LettersParser::VecIndexExprContext::VecIndexExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LettersParser::LocalContext *> LettersParser::VecIndexExprContext::local() {
  return getRuleContexts<LettersParser::LocalContext>();
}

LettersParser::LocalContext* LettersParser::VecIndexExprContext::local(size_t i) {
  return getRuleContext<LettersParser::LocalContext>(i);
}

tree::TerminalNode* LettersParser::VecIndexExprContext::INTLIT() {
  return getToken(LettersParser::INTLIT, 0);
}


size_t LettersParser::VecIndexExprContext::getRuleIndex() const {
  return LettersParser::RuleVecIndexExpr;
}


std::any LettersParser::VecIndexExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitVecIndexExpr(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::VecIndexExprContext* LettersParser::vecIndexExpr() {
  VecIndexExprContext *_localctx = _tracker.createInstance<VecIndexExprContext>(_ctx, getState());
  enterRule(_localctx, 34, LettersParser::RuleVecIndexExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    local();
    setState(152);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LettersParser::INTLIT: {
        setState(150);
        match(LettersParser::INTLIT);
        break;
      }

      case LettersParser::IDENT: {
        setState(151);
        local();
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

//----------------- TermContext ------------------------------------------------------------------

LettersParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LettersParser::LocalContext* LettersParser::TermContext::local() {
  return getRuleContext<LettersParser::LocalContext>(0);
}

tree::TerminalNode* LettersParser::TermContext::INTLIT() {
  return getToken(LettersParser::INTLIT, 0);
}

tree::TerminalNode* LettersParser::TermContext::CHARLIT() {
  return getToken(LettersParser::CHARLIT, 0);
}

tree::TerminalNode* LettersParser::TermContext::ESCAPE() {
  return getToken(LettersParser::ESCAPE, 0);
}

LettersParser::VecLitContext* LettersParser::TermContext::vecLit() {
  return getRuleContext<LettersParser::VecLitContext>(0);
}


size_t LettersParser::TermContext::getRuleIndex() const {
  return LettersParser::RuleTerm;
}


std::any LettersParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::TermContext* LettersParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 36, LettersParser::RuleTerm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(159);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(154);
      local();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(155);
      match(LettersParser::INTLIT);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(156);
      match(LettersParser::CHARLIT);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(157);
      match(LettersParser::ESCAPE);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(158);
      vecLit();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalContext ------------------------------------------------------------------

LettersParser::LocalContext::LocalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LettersParser::LocalContext::IDENT() {
  return getToken(LettersParser::IDENT, 0);
}


size_t LettersParser::LocalContext::getRuleIndex() const {
  return LettersParser::RuleLocal;
}


std::any LettersParser::LocalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitLocal(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::LocalContext* LettersParser::local() {
  LocalContext *_localctx = _tracker.createInstance<LocalContext>(_ctx, getState());
  enterRule(_localctx, 38, LettersParser::RuleLocal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(LettersParser::IDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VecLitContext ------------------------------------------------------------------

LettersParser::VecLitContext::VecLitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LettersParser::VecLitContext::INTLIT() {
  return getTokens(LettersParser::INTLIT);
}

tree::TerminalNode* LettersParser::VecLitContext::INTLIT(size_t i) {
  return getToken(LettersParser::INTLIT, i);
}

std::vector<tree::TerminalNode *> LettersParser::VecLitContext::CHARLIT() {
  return getTokens(LettersParser::CHARLIT);
}

tree::TerminalNode* LettersParser::VecLitContext::CHARLIT(size_t i) {
  return getToken(LettersParser::CHARLIT, i);
}

std::vector<tree::TerminalNode *> LettersParser::VecLitContext::ESCAPE() {
  return getTokens(LettersParser::ESCAPE);
}

tree::TerminalNode* LettersParser::VecLitContext::ESCAPE(size_t i) {
  return getToken(LettersParser::ESCAPE, i);
}

std::vector<LettersParser::LocalContext *> LettersParser::VecLitContext::local() {
  return getRuleContexts<LettersParser::LocalContext>();
}

LettersParser::LocalContext* LettersParser::VecLitContext::local(size_t i) {
  return getRuleContext<LettersParser::LocalContext>(i);
}

std::vector<tree::TerminalNode *> LettersParser::VecLitContext::STRLIT() {
  return getTokens(LettersParser::STRLIT);
}

tree::TerminalNode* LettersParser::VecLitContext::STRLIT(size_t i) {
  return getToken(LettersParser::STRLIT, i);
}


size_t LettersParser::VecLitContext::getRuleIndex() const {
  return LettersParser::RuleVecLit;
}


std::any LettersParser::VecLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LettersVisitor*>(visitor))
    return parserVisitor->visitVecLit(this);
  else
    return visitor->visitChildren(this);
}

LettersParser::VecLitContext* LettersParser::vecLit() {
  VecLitContext *_localctx = _tracker.createInstance<VecLitContext>(_ctx, getState());
  enterRule(_localctx, 40, LettersParser::RuleVecLit);
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
    setState(168); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(168);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LettersParser::INTLIT: {
          setState(163);
          match(LettersParser::INTLIT);
          break;
        }

        case LettersParser::CHARLIT: {
          setState(164);
          match(LettersParser::CHARLIT);
          break;
        }

        case LettersParser::ESCAPE: {
          setState(165);
          match(LettersParser::ESCAPE);
          break;
        }

        case LettersParser::IDENT: {
          setState(166);
          local();
          break;
        }

        case LettersParser::STRLIT: {
          setState(167);
          match(LettersParser::STRLIT);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(170); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 260046848) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void LettersParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  lettersParserInitialize();
#else
  ::antlr4::internal::call_once(lettersParserOnceFlag, lettersParserInitialize);
#endif
}
