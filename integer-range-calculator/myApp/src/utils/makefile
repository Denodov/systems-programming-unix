# Denys Odoviychuk
# CSC60 - Section 3
# Spring 2026
# App

.PHONY: clean
CC = gcc

myLib.a: myUtils.o 
	ar rv myLib.a myUtils.o
myUtils.o: myUtils.c ../../include/lab5.h
	$(CC) -c -I ../../include myUtils.c 
clean:
	rm -f *.a *.o


