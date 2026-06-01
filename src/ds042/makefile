CC = g++
CXXFLAGS = -Wall -std=c++11
TARGET = ../../bin/ds042
SRC = main.cpp MyLinkedStack.cpp
OBJS = $(SRC:.cpp=.o)

$(TARGET): $(OBJS)
	$(CC) $(CXXFLAGS) -o $@ $^

%.o: %.cpp %.h
		$(CC) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)