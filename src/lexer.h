#ifndef _LEXER_H_
#define _LEXER_H_

#include "constantDefs.h"

struct lexerNodeStruct {
	char *tokenType;
	int toState;
};
typedef struct lexerNodeStruct LexerNode;

struct tokenListStruct {
	char *tokenType;
	char s;
	int row;
	int col;
	struct tokenListStruct *next;
};
typedef struct tokenListStruct TokenList;

TokenList *lex(ifstream *in);

#endif
