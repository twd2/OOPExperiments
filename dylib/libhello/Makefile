PROJECT = libhello

include ../config.make

CC_FLAGS = -g -fPIC -Wall -std=c++11

.PHONY: all
all: $(PROJECT).$(DSO_POSTFIX)

$(PROJECT).$(DSO_POSTFIX): $(PROJECT).o $(OBJECTS)
	$(CXX) -shared -fPIC -o $@ $^

$(PROJECT).o: $(PROJECT).cpp $(HEADERS)
	$(CXX) $(CC_FLAGS) -o $@ -c $<

%.o: %.cpp %.h
	$(CXX) $(CC_FLAGS) -o $@ -c $<

.PHONY: clean
clean:
	-$(RM) *.o $(PROJECT).$(DSO_POSTFIX)
