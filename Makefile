
# Makefile
CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = msm_simulator
SRC = src/main.cpp

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)
