CXX=g++
CXXFLAGS=-std=c++11 -Wall
SRC_DIR=Metier
BUILD_DIR=build

SRCS=$(wildcard *.cpp $(SRC_DIR)/*.cpp)
OBJS=$(patsubst %.cpp,$(BUILD_DIR)/%.o,$(SRCS))

TARGET=main

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(BUILD_DIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp $(SRC_DIR)/%.h
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf $(BUILD_DIR) $(TARGET)
