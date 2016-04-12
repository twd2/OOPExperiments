SOURCES := $(shell ls *.cpp)
HEADERS := $(shell ls *.h *.hpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

CC_FLAGS = -I./libhello -g -Wall -std=c++11
LD_FLAGS = -L./libhello
LD_LIBS = -lhello

ifeq ($(shell uname),Linux)
	DSO_POSTFIX = so
else

ifeq ($(shell uname),Darwin)
	DSO_POSTFIX = dylib
else
	# Unsupported operating system.
endif

endif

.PHONY: all
all: libhello main

main: main.o $(OBJECTS)
	g++ $(LD_FLAGS) -o $@ $^ $(LD_LIBS)
	cp libhello/libhello.$(DSO_POSTFIX) .

main.o: main.cpp $(HEADERS)
	g++ $(CC_FLAGS) -o $@ -c $<

%.o: %.cpp %.h
	g++ $(CC_FLAGS) -o $@ -c $<

.PHONY: libhello
libhello:
	cd libhello && make

.PHONY: clean
clean:
	-rm -rf *.o main libhello.$(DSO_POSTFIX)
	cd libhello && make clean
