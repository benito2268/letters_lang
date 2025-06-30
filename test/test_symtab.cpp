#include <iostream>
#include <vector>
#include <functional>
#include <cassert>

#include "../symtab.h"

#define TEST_PASS 0
#define TEST_FAIL 1

static SymTab t();

int test_init_scope() {
	int res = TEST_PASS; 

	return res;
}

static std::vector<std::function<int(void)>> tests = { 
	test_init_scope,
};


int main() {	
	for (auto& test : tests) {
		int res = test();
		assert(res == TEST_PASS);
	}

	return TEST_PASS;
}
