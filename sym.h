#pragma once

#include <string>

//forward decls
enum class TypeName;

class Sym { 
private:
	std::string name;	
	TypeName type;	

public:
	//ctors and dtors
	Sym(std::string, TypeName);
	Sym(std::string);

	~Sym() = default;
	
	//member funcs
	std::string get_name();
	TypeName get_type();
	void set_type(TypeName);
};
