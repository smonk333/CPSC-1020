COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out
FILES = Date.h Date.cpp calcDays.h calcDays.cpp main.cpp

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): $(FILES)
	$(COMPILER) $(OPTIONS) $(FILES) -o $(PROGRAM)

clean:
	rm *.out