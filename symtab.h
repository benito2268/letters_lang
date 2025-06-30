#pragma once

#include <unordered_map>
#include <vector>
#include <string>
#include <optional>

//forward decls
class Sym;

class SymTab {
private:
	//'list of hashtables' approach
	std::vector<std::unordered_map<std::string, Sym>*> scopes;

public:
	//ctors and dtors
	SymTab();
	~SymTab();

	//member funcs
	void add_sym(Sym);

	void add_scope();
	void rm_scope();

	void print(); //for debugging

	std::optional<Sym> lookup_local(std::string);
	std::optional<Sym> lookup_global(std::string);	
};
