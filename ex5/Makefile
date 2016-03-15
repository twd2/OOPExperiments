SOURCES := $(shell ls *.cpp)
HEADERS := $(shell ls *.h *.hpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

.PHONY: all
all: main

main: main.o $(OBJECTS)
	g++ -o $@ $^

main.o: main.cpp $(HEADERS)
	g++ -g -Wall -std=c++11 -o $@ -c $< -fno-strict-aliasing

%.o: %.cpp %.h
	g++ -g -Wall -std=c++11 -o $@ -c $< -fno-strict-aliasing

.PHONY: clean
clean:
	-rm -rf *.o main
