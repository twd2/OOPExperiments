PROJECT = libhello
SOURCES := $(shell ls *.cpp)
HEADERS := $(shell ls *.h *.hpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

CC_FLAGS = -g -fPIC -Wall -std=c++11

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
all: $(PROJECT).$(DSO_POSTFIX)

$(PROJECT).$(DSO_POSTFIX): $(PROJECT).o $(OBJECTS)
	g++ -shared -fPIC -o $@ $^ -lpthread

$(PROJECT).o: $(PROJECT).cpp $(HEADERS)
	g++ $(CC_FLAGS) -o $@ -c $<

%.o: %.cpp %.h
	g++ $(CC_FLAGS) -o $@ -c $<

.PHONY: clean
clean:
	-rm -rf *.o $(PROJECT).$(DSO_POSTFIX)
