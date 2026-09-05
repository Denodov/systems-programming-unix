# Denys Odoviychuk
# Section 3
# Spring 2026
# src/lab9 makefile

RM = rm -rf
CC = gcc
CFLAGS = -Wall -g -I ../../include
LIB = ../../lib/lab9Utils.a

.PHONY: all clean

all: lab9.o
	$(CC) $(CFLAGS) -o ../../bin/lab9 lab9.o $(LIB)

lab9.o: lab9.c
	$(CC) $(CFLAGS) -c lab9.c

clean:
	$(RM) lab9.o ../../bin/lab9

