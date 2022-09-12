COMPILER = g++
OPTIONS = -Wall
PROGRAM = hospitalCharges.out
FILES = hospitalCharges.cpp calcTotalCharges.cpp calcTotalCharges.h validateUserInput.cpp validateUserInput.h

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): $(FILES)
	$(COMPILER) $(OPTIONS) $(FILES) -o $(PROGRAM)

clean:
	rm *.out
