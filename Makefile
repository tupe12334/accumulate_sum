CC=gcc
CFLAGS= -ansi -pedantic -Wall

all: main

main: partial-sums.o
	$(CC) $(CFLAGS) -o main.out partial-sums.o

partial-sums.o: partial-sums.c get-array-size.o
	$(CC) $(CFLAGS) -c partial-sums.c

get-array-size.o: get-array-size.c
	$(CC) $(CFLAGS) -c get-array-size.c

clean:
	rm -rf **.o