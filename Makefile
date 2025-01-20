# Define the compiler and flags
CXX = g++
# CXXFLAGS = -Wall -Wextra -std=c++17

# Automatically determine the target executable name as the directory name
TARGET = $(notdir $(CURDIR))

# Include all .cpp files in the current directory
SRCS = $(wildcard *.cpp)

# Object files (generated from source files)
OBJS = $(SRCS:.cpp=.o)

# Default target: build the executable
all: $(TARGET)

# Rule to build the target
$(TARGET): $(SRCS)
	$(CXX) -o $(TARGET) $(SRCS)

# Rule to build and run the target
run: $(TARGET)
	./$(TARGET)

# Clean rule to remove generated files
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets (not actual files)
.PHONY: all clean run