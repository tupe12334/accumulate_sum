CC=gcc
CFLAGS= -ansi -pedantic -Wall

all: main

main: partial-sums.o
	$(CC) $(CFLAGS) -o main.out partial-sums.o get-array-size.o get-array-values.o print-array.o

partial-sums.o: partial-sums.c get-array-size.o get-array-values.o
	$(CC) $(CFLAGS) -c partial-sums.c 

get-array-size.o: get-array-size.c
	$(CC) $(CFLAGS) -c get-array-size.c

get-array-values.o: get-array-values.c print-array.o
	$(CC) $(CFLAGS) -c get-array-values.c

print-array.o: print-array.c
	$(CC) $(CFLAGS) -c print-array.c

clean:
	rm -rf **.o