COMPILER = g++
OPTIONS = -Wall
PROGRAM = hospitalCharges.out
FILES = hospitalCharges.cpp patient.cpp patient.h

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): $(FILES)
	$(COMPILER) $(OPTIONS) $(FILES) -o $(PROGRAM)

clean:
	rm *.out
