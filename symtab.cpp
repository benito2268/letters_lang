#include <iostream>

#include "symtab.h"
#include "sym.h"

SymTab::SymTab() {
	//push empty hashtable for global scope
	this->scopes.push_back(new std::unordered_map<std::string, Sym>({ }));
}

SymTab::~SymTab() {
	//delete every hashtable
	for (int i = 0; i < this->scopes.size(); i++) {
		delete this->scopes[i];
	}
}

void SymTab::add_sym(Sym s) {
	//add to the current scope
	std::unordered_map<std::string, Sym> *curr = this->scopes[this->scopes.size() - 1];

	//add to the current table
	curr->insert({s.get_name(), s});
}

void SymTab::add_scope() {
	this->scopes.push_back(new std::unordered_map<std::string, Sym>({ }));
}

void SymTab::rm_scope() {
	//remove the most recent scope
	//delete last scope
	std::unordered_map<std::string, Sym> *tmp = this->scopes[this->scopes.size() - 1];
	this->scopes.pop_back();
	delete tmp;
}

std::optional<Sym> SymTab::lookup_local(std::string name) {
	//lookup the sym in the current hashtable
	std::unordered_map<std::string, Sym> *curr = this->scopes[this->scopes.size() - 1];
	
	auto it = curr->find(name);
	if (it != curr->end()) {
		return it->second; 
	}
	
	return std::nullopt;
} 


std::optional<Sym> SymTab::lookup_global(std::string name) {
	//lookup the sym in every hashtable	
	for (auto& ht : this->scopes) {
		auto it = ht->find(name);
		if (it != ht->end()) {
			return it->second;
		}
	}

	return std::nullopt;
}

void SymTab::print() {
	//print each entry
	std::cout << "SYMBOL TABLE" << std::endl;
	std::cout << "***********************************************" << std::endl;
	for (auto& ht : this->scopes) {
		std::cout << "start scope XXX" << std::endl;
		for (auto& p : *ht) {
			std::cout << p.first << " : " << p.second.get_name() << std::endl;	
		}
		std::cout << "end scope XXX" << std::endl;
	}

	std::cout << "***********************************************" << std::endl;
}
