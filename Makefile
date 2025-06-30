# to install antlr on linux (as 'antlr4'):
# 	1. curl -O https://www.antlr.org/download/antlr-4.13.1-complete.jar
# 	2. sudo mv antlr-4.13.1-complete.jar /usr/local/lib/
# 	3. add these lines to bashrc if you wanna use it without the Makefile
# 		export CLASSPATH=".:/usr/local/lib/antlr-4.13.1-complete.jar:$CLASSPATH"
#		alias antlr4='java -jar /usr/local/lib/antlr-4.13.1-complete.jar'

TARGET=letters

ANTLRJAR=/usr/local/lib/antlr-4.13.1-complete.jar
ANTLR=java -jar $(ANTLRJAR)

GENFILES= LettersLexer.cpp 			\
		  LettersParser.cpp 		\
		  LettersVisitor.cpp		\
		  LettersBaseVisitor.cpp 	\

TESTFILE=test.let
GRAMMAR=Letters.g4

CC=g++
CFLAGS=-Wall -g -std=c++20 -I/usr/local/include/antlr4-runtime/ -Wno-overloaded-virtual
LDFLAGS=-Wall -g -std=c++20 -lantlr4-runtime

BUILDDIR=build/
CFILES=$(wildcard *.cpp)
HFILES=$(wildcard *.h)

OBJS=$(CFILES:.cpp=.o)

# --- shouldn't need to edit beyond this point ---

all: $(TARGET)
.PHONY: clean test headertest

gen: $(GRAMMAR)
	$(ANTLR) -Dlanguage=Cpp -visitor -no-listener -encoding UTF-8 $^

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)
	mv *.o $(BUILDDIR)

%.o : %.cpp
	$(CC) -o $@ -c $< $(CFLAGS)

test:
	./$(TARGET) $(TESTFILE)

headertest:
	@echo "Compiling Header Files..."
	@all_ok=0; \
	green=$$(tput setaf 2); \
	red=$$(tput setaf 1); \
	normal=$$(tput sgr0); \
	for h in $(HFILES); do \
		echo "#include \"$$h\"" | $(CC) $(CFLAGS) -x c++ -fsyntax-only -; \
		status=$$?; \
		if [ $$status -eq 0 ]; then \
			printf "%s %s%s%s\n" "$$h" "$$green" "OK" "$$normal"; \
		else \
			printf "%s %s%s%s\n" "$$h" "$$red" "FAIL" "$$normal"; \
			echo "$$output"; \
			all_ok=1; \
		fi; \
	done; \
	exit $$all_ok

clean:
	rm -f $(GENFILES) Letters.interp LettersLexer.interp Letters.tokens LettersLexer.tokens
	rm -f build/*.o
