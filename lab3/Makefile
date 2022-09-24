COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out
FILES = Circle.h Circle.cpp Rectangle.h Rectangle.cpp Square.h Square.cpp Trapezoid.h Trapezoid.cpp areaCalc.cpp

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): $(FILES)
	$(COMPILER) $(OPTIONS) $(FILES) -o $(PROGRAM)

clean:
	rm *.out