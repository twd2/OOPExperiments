include config.make

ifdef DEBUG
DBG = -g
else
DBG = -O2 -D__NO_INLINE__ # walkaround a bug of MinGW
endif

CC_FLAGS = $(DBG) -Wall -std=c++11
LD_FLAGS =
LD_LIBS = -lm

.PHONY: all
all: main

main: main.o $(OBJECTS)
	$(CXX) $(LD_FLAGS) -o $@ $^ $(LD_LIBS)

main.o: main.cpp $(HEADERS)
	$(CXX) $(CC_FLAGS) -o $@ -c $<

%.o: %.cpp %.h
	$(CXX) $(CC_FLAGS) -o $@ -c $<

.PHONY: clean
clean:
	-$(RM) *.o main
