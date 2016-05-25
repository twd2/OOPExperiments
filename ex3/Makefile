SOURCES := $(shell ls *.cpp)
HEADERS := $(shell ls *.h *.hpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

.PHONY: all
all: main

main: main.o $(OBJECTS)
	$(CXX) -o $@ $^

main.o: main.cpp $(HEADERS)
	$(CXX) -Wall -O2 -std=c++11 -o $@ -c $< -fno-strict-aliasing

%.o: %.cpp %.h
	$(CXX) -Wall -O2 -std=c++11 -o $@ -c $< -fno-strict-aliasing

.PHONY: clean
clean:
	-rm -rf *.o main
