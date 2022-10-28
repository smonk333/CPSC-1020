COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out
FILES = main.cpp printResult.cpp printResult.h Quiz.cpp Quiz.h

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): $(FILES)
	$(COMPILER) $(OPTIONS) $(FILES) -o $(PROGRAM)

clean:
	rm *.out