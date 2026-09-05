# Project level makefile
# Lab5 Provided File
# CSC60 Spring 2026
# Project makefile

.PHONY: all lib app clean
CC = gcc

all: myApp

myApp: lib app
	$(CC) src/app/main.o src/utils/myLib.a -o src/app/myApp

lib:
	@echo Building library...
	make -C src/utils 

app:
	@echo Building application...
	make -C src/app 

clean:
	make -C src/utils clean
	make -C src/app clean
	rm -f myApp
