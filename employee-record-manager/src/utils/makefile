# Denys Odoviychuk
# Section 3
# Spring 2026
# src/utils makefile

CC = gcc 
RM = rm -f
CFLAGS = -Wall -g -I ../../include

.PHONY: lib clean

lib: lab9Utils.o signals.o
	ar rv ../../lib/lab9Utils.a lab9Utils.o signals.o

lab9Utils.o:
	$(CC) $(CFLAGS) -c lab9Utils.c

signals.o:
	$(CC) $(CFLAGS) -c signals.c
clean:
	$(RM) lab9Utils.o signals.o ../../lib/lab9Utils.a
	
