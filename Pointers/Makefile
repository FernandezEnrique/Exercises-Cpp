#############################################
# Author: https://github.com/FernandezEnrique
#############################################

HOME = .
SRC = $(HOME)/src
INCLUDE = $(HOME)/include
OBJ = $(HOME)/obj
BIN = $(HOME)/bin
LIB = $(HOME)/lib

all: presentation \
     $(BIN)/ex01 \
     $(BIN)/ex02 \
     $(BIN)/ex03 \
     $(BIN)/ex04 \
     $(BIN)/ex05 \
	 $(BIN)/ex06


presentation:
	@echo ""
	@echo "###########################################"
	@echo "Author: https://github.com/FernandezEnrique"
	@echo "###########################################"
	@echo ""


############
#  .exe
############

$(BIN)/ex01: $(OBJ)/ex01.o
	g++ -o $(BIN)/ex01 $(OBJ)/ex01.o

$(BIN)/ex02: $(OBJ)/ex02.o
	g++ -o $(BIN)/ex02 $(OBJ)/ex02.o
	
$(BIN)/ex03: $(OBJ)/ex03.o
	g++ -o $(BIN)/ex03 $(OBJ)/ex03.o

$(BIN)/ex04: $(OBJ)/ex04.o
	g++ -o $(BIN)/ex04 $(OBJ)/ex04.o

$(BIN)/ex05: $(OBJ)/ex05.o
	g++ -o $(BIN)/ex05 $(OBJ)/ex05.o

$(BIN)/ex06: $(OBJ)/ex06.o
	g++ -o $(BIN)/ex06 $(OBJ)/ex06.o

############
#  Objects
############

$(OBJ)/ex01.o: $(SRC)/ex01.cpp
	g++ -c -o $(OBJ)/ex01.o \
	       $(SRC)/ex01.cpp \
		   -std=c++14

$(OBJ)/ex02.o: $(SRC)/ex02.cpp
	g++ -c -o $(OBJ)/ex02.o \
	       $(SRC)/ex02.cpp \
		   -std=c++14

$(OBJ)/ex03.o: $(SRC)/ex03.cpp
	g++ -c -o $(OBJ)/ex03.o \
	       $(SRC)/ex03.cpp \
		   -std=c++14

$(OBJ)/ex04.o: $(SRC)/ex04.cpp
	g++ -c -o $(OBJ)/ex04.o \
	       $(SRC)/ex04.cpp \
		   -std=c++14

$(OBJ)/ex05.o: $(SRC)/ex05.cpp
	g++ -c -o $(OBJ)/ex05.o \
	       $(SRC)/ex05.cpp \
		   -std=c++14

$(OBJ)/ex06.o: $(SRC)/ex06.cpp
	g++ -c -o $(OBJ)/ex06.o \
	       $(SRC)/ex06.cpp \
		   -std=c++14

############
#  Clean
############

clear:
	@-rm -f $(OBJ)/*
	@echo "$(OBJ) clean"

mr.proper: clean
	@-rm -f $(BIN)/*
	@-rm -f $(LIB)/*
	@echo "$(BIN) y $(LIB) clean"