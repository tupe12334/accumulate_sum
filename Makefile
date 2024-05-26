CC=gcc
CFLAGS= -ansi -pedantic -Wall

all: main

main: partial-sums.o
	$(CC) $(CFLAGS) -o main.out partial-sums.o

partial-sums.o: partial-sums.c
	$(CC) $(CFLAGS) -c partial-sums.c

clean:
	rm -rf **.o