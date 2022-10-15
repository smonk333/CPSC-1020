COMPILER = g++
OPTIONS = -Wall
PROGRAM = program.out
FILES = Student.h Student.cpp Commuter.cpp Commuter.h Vendor.h Vendor.cpp Employee.h Employee.cpp Invoice.h Invoice.cpp main.cpp Motorcycle.h Motorcycle.cpp Truck.h Truck.cpp Sportscar.h Sportscar.cpp Sedan.h Sedan.cpp

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): $(FILES)
	$(COMPILER) $(OPTIONS) $(FILES) -o $(PROGRAM)

clean:
	rm *.out
