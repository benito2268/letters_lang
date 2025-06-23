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
CFLAGS=-Wall -g -I/usr/local/incude/antlr4-runtime/

CFILES=$(wildcard *.cpp)
HFILES=$(wildcard *.h)

OBJS=$(CFILES:.cpp=.o)

# --- shouldn't need to edit beyond this point ---

all: $(TARGET) gen
.PHONY: clean test

gen: $(GRAMMAR)
	$(ANTLR) -Dlanguage=Cpp -visitor -no-listener -encoding UTF-8 $^

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

%.o : %.cpp
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -f $(GENFILES) Letters.interp LettersLexer.interp Letters.tokens LettersLexer.tokens
	rm -f build/*.o
