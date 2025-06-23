
// Generated from Letters.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "LettersParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by LettersParser.
 */
class  LettersVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by LettersParser.
   */
    virtual std::any visitProgram(LettersParser::ProgramContext *context) = 0;

    virtual std::any visitDeclList(LettersParser::DeclListContext *context) = 0;

    virtual std::any visitDecl(LettersParser::DeclContext *context) = 0;

    virtual std::any visitStmtList(LettersParser::StmtListContext *context) = 0;

    virtual std::any visitStmt(LettersParser::StmtContext *context) = 0;

    virtual std::any visitIfStmt(LettersParser::IfStmtContext *context) = 0;

    virtual std::any visitAssignStmt(LettersParser::AssignStmtContext *context) = 0;

    virtual std::any visitReadStmt(LettersParser::ReadStmtContext *context) = 0;

    virtual std::any visitWriteStmt(LettersParser::WriteStmtContext *context) = 0;

    virtual std::any visitJumpStmt(LettersParser::JumpStmtContext *context) = 0;

    virtual std::any visitExpr(LettersParser::ExprContext *context) = 0;

    virtual std::any visitAddSubExpr(LettersParser::AddSubExprContext *context) = 0;

    virtual std::any visitMulDivExpr(LettersParser::MulDivExprContext *context) = 0;

    virtual std::any visitEqualsExpr(LettersParser::EqualsExprContext *context) = 0;

    virtual std::any visitCompExpr(LettersParser::CompExprContext *context) = 0;

    virtual std::any visitAtomExpr(LettersParser::AtomExprContext *context) = 0;

    virtual std::any visitAssignExpr(LettersParser::AssignExprContext *context) = 0;

    virtual std::any visitVecIndexExpr(LettersParser::VecIndexExprContext *context) = 0;

    virtual std::any visitTerm(LettersParser::TermContext *context) = 0;

    virtual std::any visitLocal(LettersParser::LocalContext *context) = 0;

    virtual std::any visitVecLit(LettersParser::VecLitContext *context) = 0;


};

