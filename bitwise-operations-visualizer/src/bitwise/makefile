# Denys Odoviychuk
# Section 3
# Spring 2026
# bitwise makefile

CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I../../include
RM = rm -f

BIN = ../../bin/bitwise

all: $(BIN)

$(BIN): bitwise.o ../../lib/libutils.a
	$(CC) $(CFLAGS) -o $(BIN) bitwise.o -L../../lib -lutils

bitwise.o: bitwise.c ../../include/lab6.h
	$(CC) $(CFLAGS) -c bitwise.c

clean:
	$(RM) *.o
