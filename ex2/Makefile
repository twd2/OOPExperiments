.PHONY: all
all: main main.f

main: main.o Foo.o
	$(CXX) -o $@ $^

main.f: main.f.o Foo.f.o
	$(CXX) -o $@ $^

main.o: main.cpp Matrix.hpp Foo.h
	$(CXX) -Wall -O2 -std=c++11 -o $@ -c $<

Foo.o: Foo.cpp Foo.h
	$(CXX) -Wall -O2 -std=c++11 -o $@ -c $<

main.f.o: main.cpp Matrix.hpp Foo.h
	$(CXX) -Wall -O2 -std=c++11 -fno-elide-constructors -o $@ -c $<

Foo.f.o: Foo.cpp Foo.h
	$(CXX) -Wall -O2 -std=c++11 -fno-elide-constructors -o $@ -c $<

.PHONY: clean
clean:
	-rm -rf *.o main main.f
