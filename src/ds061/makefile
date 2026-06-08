CC = g++
CXXFLAGS = -Wall -std=c++11
TARGET = ../../bin/ds061
SRC = main.cpp QueueLinkedList.cpp
OBJS = $(SRC:.cpp=.o)

$(TARGET): $(OBJS)
	$(CC) $(CXXFLAGS) -o $@ $^

%.o: %.cpp %.h
		$(CC) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)