# Denys Odoviychuk
# Section 3
# Spring 2026

# Parent Makefile

RM = rm -rf
CC = gcc
CFLAGS = -Wall -g -I ../../include

.PHONY: all clean

all: parent.o
	$(CC) $(CFLAGS) -o ../../bin/parent parent.o

parent.o: parent.c ../../include/lab10.h
	$(CC) $(CFLAGS) -c parent.c

clean:
	$(RM) parent.o ../../bin/parent
