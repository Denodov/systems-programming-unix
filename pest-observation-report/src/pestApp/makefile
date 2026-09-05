# Denys Odoviychuk
# Section 3
# Spring 2026
# pestApp makefile

CFLAGS = -I ../../include
RM = rm -f
CC = gcc 

BIN = ../../bin/pestApp
LIB = ../../lib/libUtils.a

.PHONY: all clean

all: $(BIN)

$(BIN): pestApp.o $(LIB) 
	$(CC) $(CFLAGS) -o $(BIN) pestApp.o $(LIB) 

pestApp.o: pestApp.c ../../include/utils.h

clean:
	$(RM) *.o pestApp $(BIN)
