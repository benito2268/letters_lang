
// Generated from Letters.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  LettersParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, PERIOD = 20, 
    WS = 21, COMMENT = 22, IDENT = 23, INTLIT = 24, ESCAPE = 25, CHARLIT = 26, 
    STRLIT = 27
  };

  enum {
    RuleProgram = 0, RuleDeclList = 1, RuleDecl = 2, RuleStmtList = 3, RuleStmt = 4, 
    RuleIfStmt = 5, RuleAssignStmt = 6, RuleReadStmt = 7, RuleWriteStmt = 8, 
    RuleJumpStmt = 9, RuleExpr = 10, RuleAddSubExpr = 11, RuleMulDivExpr = 12, 
    RuleEqualsExpr = 13, RuleCompExpr = 14, RuleAtomExpr = 15, RuleAssignExpr = 16, 
    RuleVecIndexExpr = 17, RuleTerm = 18, RuleLocal = 19, RuleVecLit = 20
  };

  explicit LettersParser(antlr4::TokenStream *input);

  LettersParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~LettersParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class DeclListContext;
  class DeclContext;
  class StmtListContext;
  class StmtContext;
  class IfStmtContext;
  class AssignStmtContext;
  class ReadStmtContext;
  class WriteStmtContext;
  class JumpStmtContext;
  class ExprContext;
  class AddSubExprContext;
  class MulDivExprContext;
  class EqualsExprContext;
  class CompExprContext;
  class AtomExprContext;
  class AssignExprContext;
  class VecIndexExprContext;
  class TermContext;
  class LocalContext;
  class VecLitContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StmtListContext *> stmtList();
    StmtListContext* stmtList(size_t i);
    std::vector<DeclListContext *> declList();
    DeclListContext* declList(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  DeclListContext : public antlr4::ParserRuleContext {
  public:
    DeclListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclContext *> decl();
    DeclContext* decl(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclListContext* declList();

  class  DeclContext : public antlr4::ParserRuleContext {
  public:
    DeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERIOD();
    antlr4::tree::TerminalNode *IDENT();
    AssignExprContext *assignExpr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclContext* decl();

  class  StmtListContext : public antlr4::ParserRuleContext {
  public:
    StmtListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtListContext* stmtList();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfStmtContext *ifStmt();
    AssignStmtContext *assignStmt();
    ReadStmtContext *readStmt();
    WriteStmtContext *writeStmt();
    JumpStmtContext *jumpStmt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  IfStmtContext : public antlr4::ParserRuleContext {
  public:
    IfStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    std::vector<StmtListContext *> stmtList();
    StmtListContext* stmtList(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStmtContext* ifStmt();

  class  AssignStmtContext : public antlr4::ParserRuleContext {
  public:
    AssignStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignExprContext *assignExpr();
    antlr4::tree::TerminalNode *PERIOD();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignStmtContext* assignStmt();

  class  ReadStmtContext : public antlr4::ParserRuleContext {
  public:
    ReadStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalContext *local();
    antlr4::tree::TerminalNode *PERIOD();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReadStmtContext* readStmt();

  class  WriteStmtContext : public antlr4::ParserRuleContext {
  public:
    WriteStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERIOD();
    antlr4::tree::TerminalNode *INTLIT();
    antlr4::tree::TerminalNode *CHARLIT();
    antlr4::tree::TerminalNode *ESCAPE();
    VecLitContext *vecLit();
    LocalContext *local();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WriteStmtContext* writeStmt();

  class  JumpStmtContext : public antlr4::ParserRuleContext {
  public:
    JumpStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    antlr4::tree::TerminalNode *PERIOD();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JumpStmtContext* jumpStmt();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddSubExprContext *addSubExpr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  AddSubExprContext : public antlr4::ParserRuleContext {
  public:
    AddSubExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MulDivExprContext *> mulDivExpr();
    MulDivExprContext* mulDivExpr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddSubExprContext* addSubExpr();

  class  MulDivExprContext : public antlr4::ParserRuleContext {
  public:
    MulDivExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EqualsExprContext *> equalsExpr();
    EqualsExprContext* equalsExpr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulDivExprContext* mulDivExpr();

  class  EqualsExprContext : public antlr4::ParserRuleContext {
  public:
    EqualsExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CompExprContext *> compExpr();
    CompExprContext* compExpr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualsExprContext* equalsExpr();

  class  CompExprContext : public antlr4::ParserRuleContext {
  public:
    CompExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AtomExprContext *> atomExpr();
    AtomExprContext* atomExpr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompExprContext* compExpr();

  class  AtomExprContext : public antlr4::ParserRuleContext {
  public:
    AtomExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignExprContext *assignExpr();
    VecIndexExprContext *vecIndexExpr();
    TermContext *term();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomExprContext* atomExpr();

  class  AssignExprContext : public antlr4::ParserRuleContext {
  public:
    AssignExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TermContext *term();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignExprContext* assignExpr();

  class  VecIndexExprContext : public antlr4::ParserRuleContext {
  public:
    VecIndexExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LocalContext *> local();
    LocalContext* local(size_t i);
    antlr4::tree::TerminalNode *INTLIT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VecIndexExprContext* vecIndexExpr();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalContext *local();
    antlr4::tree::TerminalNode *INTLIT();
    antlr4::tree::TerminalNode *CHARLIT();
    antlr4::tree::TerminalNode *ESCAPE();
    VecLitContext *vecLit();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermContext* term();

  class  LocalContext : public antlr4::ParserRuleContext {
  public:
    LocalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalContext* local();

  class  VecLitContext : public antlr4::ParserRuleContext {
  public:
    VecLitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INTLIT();
    antlr4::tree::TerminalNode* INTLIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CHARLIT();
    antlr4::tree::TerminalNode* CHARLIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ESCAPE();
    antlr4::tree::TerminalNode* ESCAPE(size_t i);
    std::vector<LocalContext *> local();
    LocalContext* local(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRLIT();
    antlr4::tree::TerminalNode* STRLIT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VecLitContext* vecLit();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

