COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out
FILES = *.h *.cpp

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): $(FILES)
	$(COMPILER) $(OPTIONS) $(FILES) -o $(PROGRAM)

clean:
	rm *.out