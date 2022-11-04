compiler = g++
options = -Wall
program = main.out

all: $(program)

run: $(program)
	./$(program)

$(program): main.cpp Pstring.cpp
	$(compiler) $(options) main.cpp Pstring.cpp -o main.out

clean:
	rm *.out
