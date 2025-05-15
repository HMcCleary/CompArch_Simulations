# Compiler and flags
CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++17

# Cache configuration (can be overridden by command line or environment)
CACHE_SIZE ?= 1024        # in bytes
BLOCK_SIZE ?= 16           # in bytes
ASSOCIATIVITY ?= 4         # number of blocks per set

# Define macros to pass to the compiler
DEFINES := -DCACHE_SIZE=$(CACHE_SIZE) -DBLOCK_SIZE=$(BLOCK_SIZE) -DASSOCIATIVITY=$(ASSOCIATIVITY)

# Source and output
SRC := main.cpp cache.cpp
OBJ := $(SRC:.cpp=.o)
TARGET := cache_sim

# Rules
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $(DEFINES) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEFINES) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean

