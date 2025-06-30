#include <iostream>
#include <string>
#include <memory>

#include "antlr4-runtime.h"
#include "LettersLexer.h"
#include "LettersParser.h"
#include "utils.h"

#include "symtab.h"
#include "sym.h"

using namespace antlr4;

int main(int argc, char *argv[]) {
	//only get filename from argv for now
	std::string infile_name;
	
	if (argc == 2) {
		infile_name = argv[1];
	}
	else {
		std::cerr << "invalid command-line options" << std::endl;
		std::exit(1);
	}

	std::string in_code = file2str(infile_name);

	ANTLRInputStream stream(in_code);
	LettersLexer lexer(&stream);
	CommonTokenStream tokens(&lexer);

	LettersParser parser(&tokens);

	//un-parse for debugging
	//std::unique_ptr<tree::ParseTree> tree(parser.program());
	//std::cout << tree->toStringTree(&parser) << std::endl;

	return 0;
}

