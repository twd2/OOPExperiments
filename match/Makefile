include config.make

CC_FLAGS = -g -Wall -std=c++11
LD_FLAGS =
LD_LIBS =

.PHONY: all
all: main

main: main.o $(OBJECTS)
	g++ $(LD_FLAGS) -o $@ $^ $(LD_LIBS)

main.o: main.cpp $(HEADERS)
	g++ $(CC_FLAGS) -o $@ -c $<

%.o: %.cpp %.h
	g++ $(CC_FLAGS) -o $@ -c $<

.PHONY: clean
clean:
	-$(RM) *.o main
