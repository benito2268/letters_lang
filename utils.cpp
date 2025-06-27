#include <fstream>
#include <sstream>

#include "utils.h"


std::string file2str(const std::string filename) {
	std::ifstream in_file(filename);
	std::ostringstream buf;
	buf << in_file.rdbuf();
	
	return buf.str();
}

