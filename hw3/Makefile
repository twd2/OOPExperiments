SOURCES := $(shell ls *.cpp)
DEPS := $(SOURCES:.cpp=.d)
HEADERS := $(shell ls *.h *.hpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

PROJECT = main

CC_FLAGS = $(CC_DBG_FLAGS) -Wall -std=c++11 $(CXXFLAGS)
LD_FLAGS = 
LD_LIBS = 

.PHONY: all
all: $(PROJECT)

-include $(DEPS)

$(PROJECT): $(OBJECTS)
	$(CXX) $(LD_FLAGS) -o $@ $(OBJECTS) $(LD_LIBS)

%.o: %.cpp
	$(CXX) $(CC_FLAGS) -MMD -MP -c $<
	$(CXX) $(CC_FLAGS) -o $@ -c $<

.PHONY: clean
clean:
	-$(RM) *.o *.d *.exe $(PROJECT)
