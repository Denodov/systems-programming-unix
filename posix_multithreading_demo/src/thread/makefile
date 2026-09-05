# Denys Odoviychuk
# Section 3
# Spring 2026
# src/thread makefile

CC = gcc
RM = rm -f
CFLAGS = -Wall -g -I ../../include

.PHONY: lib clean

lib: threadFun.o 
	ar rv ../../lib/libTh.a threadFun.o 

threadFun.o: threadFun.c
	$(CC) $(CFLAGS) -c threadFun.c

clean:
	$(RM) ../../lib/libTh.a threadFun.o
