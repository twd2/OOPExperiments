include config.make

CC_FLAGS = -I./libhello -g -Wall -std=c++11
LD_FLAGS = -L./libhello
LD_LIBS = -lhello

.PHONY: all
all: libhello main

main: main.o $(OBJECTS)
	$(CXX) $(LD_FLAGS) -o $@ $^ $(LD_LIBS)
	$(CP) libhello$(SLASH)libhello.$(DSO_POSTFIX) .

main.o: main.cpp $(HEADERS)
	$(CXX) $(CC_FLAGS) -o $@ -c $<

%.o: %.cpp %.h
	$(CXX) $(CC_FLAGS) -o $@ -c $<

.PHONY: libhello
libhello:
	cd libhello && make

.PHONY: clean
clean:
	-$(RM) *.o main libhello.$(DSO_POSTFIX)
	cd libhello && make clean
