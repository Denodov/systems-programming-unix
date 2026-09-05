# Denys Odoviychuk
# Section 3
# Spring 2026
# Project makefile

RM = rm -rf
MKDIR_P = mkdir -p

.PHONY: all setup build run clean

all: setup build run 

setup:
	@$(MKDIR_P) bin lib data
	cp ~/input.dat data/

build:
	$(MAKE) -C src/utils
	$(MAKE) -C src/pestApp

run:
	./bin/pestApp data/input.dat

clean:
	$(MAKE) -C src/utils clean
	$(MAKE) -C src/pestApp clean
	$(RM) bin lib

	
