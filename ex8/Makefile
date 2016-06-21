SOURCES := $(shell ls *.cpp)
HEADERS := $(shell ls *.h *.hpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

.PHONY: all
all: main

main: main.o $(OBJECTS)
	$(CXX) -o $@ $^

main.o: main.cpp $(HEADERS)
	$(CXX) -g -Wall -std=c++11 -o $@ -c $<

%.o: %.cpp %.h
	$(CXX) -g -Wall -std=c++11 -o $@ -c $<

.PHONY: clean
clean:
	-rm -rf *.o main
