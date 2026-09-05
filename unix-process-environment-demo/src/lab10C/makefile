# Denys Odoviychuk
# Section 3
# Spring 2026

# Child Makefile

RM = rm -f
CC = gcc
CFLAGS = -Wall -g -I ../../include/

.PHONY: all clean

all: child.o
	$(CC) $(CFLAGS) -o ../../bin/child child.o

child.o: child.c ../../include/lab10.h
	$(CC) $(CFLAGS) -c child.c

clean:
	$(RM) child.o ../../bin/child
