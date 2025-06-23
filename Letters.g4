grammar Letters ;

//parser rules
program : (stmtList | declList)* EOF ;              //accepts decls with or without an initial assignment

declList : decl+ ;
decl : ('B' | 'N' | 'C' | 'V' | 'P') (IDENT | assignExpr) PERIOD ;

stmtList : stmt+ ;
stmt : ifStmt
	 | assignStmt
	 | readStmt
	 | writeStmt
	 | jumpStmt
	 ;

ifStmt		: 'I' expr 'F' stmtList+ 'F' ;
assignStmt	: assignExpr PERIOD ;
readStmt	: 'R' local PERIOD ;
writeStmt	: 'W' (INTLIT | CHARLIT | ESCAPE | vecLit | local) PERIOD ;
jumpStmt	: 'J' IDENT PERIOD ;

expr : addSubExpr ;

addSubExpr : mulDivExpr (('A' | 'S') mulDivExpr)* ; 	// add, subtract
mulDivExpr : equalsExpr (('M' | 'D') equalsExpr)* ;		// multiply, divide
equalsExpr : compExpr   (('Q' | 'U') compExpr)*   ;		// equal, unequal
compExpr   : atomExpr   (('G' | 'L') atomExpr)*   ; 	// greater than, less than

atomExpr : assignExpr
		 | vecIndexExpr
		 | term
		 ;

assignExpr   : term 'E' expr ;
vecIndexExpr : local (INTLIT | local) ;

term : local
	 | INTLIT
	 | CHARLIT
	 | ESCAPE
	 | vecLit
	 ;

local : IDENT ;

vecLit : (INTLIT | CHARLIT | ESCAPE | local | STRLIT)+ ;

//lexer rules
PERIOD  : '.' ; 

WS	    : [ \t\r\n]+ -> skip ;		//skip other whitespace for now
COMMENT : '#'[~\r\n]+ -> skip ;		// allow '#' for comments

IDENT   : ~[A-Z0-9 \t\r\n] ;		//accepts ONE of any unicode char that is not a cap. letter, whitespace, or digit
INTLIT  : [0-9] ;					//matches a single char integer
ESCAPE  : 'X'[snt];					//escape chars
CHARLIT : '\''~[ \t\r\n]'\'' ;
STRLIT  : '"'~[\n\r]*'"' ;			//only usable as a veclit of chars
