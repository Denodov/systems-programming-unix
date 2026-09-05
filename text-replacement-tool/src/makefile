# Denys Odoviychuk
# Section 3
# Spring 2026

CC = gcc
CFLAGS = -Wall -g -I ../include/

OBJS = lab8.o lab8Funs.o

.PHONY: clean 

lab8: $(OBJS)
	$(CC) $(CFLAGS) -o lab8 $(OBJS)

lab8.o: lab8.c ../include/lab8.h
	$(CC) $(CFLAGS) -c lab8.c

lab8Funs.o: lab8Funs.c ../include/lab8.h
	$(CC) $(CFLAGS) -c lab8Funs.c

clean:
	rm -rf *.o lab8 
