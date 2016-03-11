SOURCES := $(shell ls *.cpp)
HEADERS := $(shell ls *.h *.hpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

.PHONY: all
all: main

main: main.o $(OBJECTS)
	g++ -o $@ $^

main.o: main.cpp $(HEADERS)
	g++ -Wall -O2 -std=c++11 -o $@ -c $<

%.o: %.cpp %.h
	g++ -Wall -O2 -std=c++11 -o $@ -c $<

.PHONY: clean
clean:
	-rm -rf *.o main
