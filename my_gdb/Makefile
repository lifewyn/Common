CC = gcc
CFLAGS = -Wall -g -v
#LDFLAGS = -lpthread

.PHONY : clean

my_gdb : my_gdb.o
	$(CC) -o my_gdb my_gdb.o

my_gdb.o : my_gdb.c
	$(CC) -c my_gdb.c -o my_gdb.o $(CFLAGS)

clean :
	rm -f my_gdb my_gdb.o