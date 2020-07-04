# adding comments it's possible with hash
# declare the variable
CC=g++

CFLAGS=-c -Wall

# this target will compile all the files

all: file

file: main.o Account.o
	$(CC) main.o Account.o -o exec

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

Account.o: Account.cpp
	$(CC) $(CFLAGS) Account.cpp

clean:
	rm -rf *o exec