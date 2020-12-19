# adding comments it's possible with hash
# declare the variable
CC=g++

CFLAGS=-c -Wall

# this target will compile all the files

all: file

file: main.o Dreamer.o
	$(CC) main.o Dreamer.o -o exec

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

Dreamer.o: Dreamer.cpp
	$(CC) $(CFLAGS) Dreamer.cpp

clean:
	rm -rf *o exec