COMPILER = g++
OPTIONS = -Wall
PROGRAM = retirementCalc.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

retirementCalc.out: retirementCalc.cpp compoundCalc.cpp
	$(COMPILER) $(OPTIONS) retirementCalc.cpp compoundCalc.cpp -o $(PROGRAM)

clean: 
	rm *.out
