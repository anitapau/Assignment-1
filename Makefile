#compiler
CC=gcc
#linker
LD=gcc
#include file directory
CFLAGS=-I.

#linker rule
testSort: main.o insertionSort.o
#	gcc -o testSort main.o insertionSort.o
	$(LD) -o testSort main.o insertSort.o
	
#compiler rules
main.o: main.c
#gcc -c -I. main.c
	$(CC) -c $(CFLAGS) main.c	
	 
insertionSort.o: insertionSort.c
sort1.o: sort1.c

sort2.o: sort2.c 

#clean up procedure		
clean:
	rm *.o

