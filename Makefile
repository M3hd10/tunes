CC=g++
CFLAGS= -g -Wall

TARGET = main

# all: $(TARGET)

# $(TARGET): $(TARGET).cpp
# 	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

# test.o: test.cpp
# track.o: track.cpp
# album.o: album.cpp

main: main.o track.o album.o store.o
	$(CC) $(CFLAGS) -o main main.o track.o album.o store.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

track.o: track.cpp
	$(CC) $(CFLAGS) -c track.cpp

album.o: album.cpp
	$(CC) $(CFLAGS) -c album.cpp

store.o: store.cpp
	$(CC) $(CFLAGS) -c store.cpp

.PHONY: clean
clean:
	@rm -f $(TARGET) *.o
