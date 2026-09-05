# Denys Odoviychuk
# Section 3
# Spring 2026
# src/main makefile

CC = gcc
RM = rm -f
CFLAGS = -Wall -g -I ../../include
LIB = ../../lib/libTh.a

.PHONY: all clean

all: threadProg.o
	$(CC) $(CFLAGS) -o ../../bin/threadProg threadProg.o $(LIB) -lpthread

threadProg.o: threadProg.c
	$(CC) $(CFLAGS) -c threadProg.c

clean:
	$(RM) threadProg.o ../../bin/threadProg
