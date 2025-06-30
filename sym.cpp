#include <iostream>

#include "sym.h"
#include "type.h"

Sym::Sym(std::string name, TypeName type) 
 : name(name), type(type)
{ }

Sym::Sym(std::string name) 
 : name(name)
{ }

std::string Sym::get_name() {
	return this->name;
}

TypeName Sym::get_type() {
	return this->type;
}

void Sym::set_type(TypeName t) {
	this->type = t;
}

