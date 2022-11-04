COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out
FILES = EncryptableString.cpp EncryptableString.h main.cpp

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): $(FILES)
	$(COMPILER) $(OPTIONS) $(FILES) -o $(PROGRAM)

clean:
	rm *.out