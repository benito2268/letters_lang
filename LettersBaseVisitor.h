
// Generated from Letters.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "LettersVisitor.h"


/**
 * This class provides an empty implementation of LettersVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  LettersBaseVisitor : public LettersVisitor {
public:

  virtual std::any visitProgram(LettersParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclList(LettersParser::DeclListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecl(LettersParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtList(LettersParser::StmtListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt(LettersParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStmt(LettersParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignStmt(LettersParser::AssignStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReadStmt(LettersParser::ReadStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWriteStmt(LettersParser::WriteStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJumpStmt(LettersParser::JumpStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(LettersParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSubExpr(LettersParser::AddSubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDivExpr(LettersParser::MulDivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqualsExpr(LettersParser::EqualsExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompExpr(LettersParser::CompExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomExpr(LettersParser::AtomExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignExpr(LettersParser::AssignExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVecIndexExpr(LettersParser::VecIndexExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(LettersParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocal(LettersParser::LocalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVecLit(LettersParser::VecLitContext *ctx) override {
    return visitChildren(ctx);
  }


};

