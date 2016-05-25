.PHONY: all
all: main

main: main.o foobar.o
	$(CXX) -o $@ $^

main.o: main.cpp foobar.h
	$(CXX) -Wall -O2 -std=c++11 -o $@ -c $<

foobar.o: foobar.cpp foobar.h
	$(CXX) -Wall -O2 -std=c++11 -o $@ -c $<

.PHONY: clean
clean:
	-rm -rf *.o main
