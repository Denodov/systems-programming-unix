# Denys Odoviychuk
# Section 3
# Spring 2026
# Top-level Makefile

RM = rm -rf
MKDIR_P = mkdir -p

.PHONY: all setup build clean

all: setup build

setup:
	@$(MKDIR_P) bin lib

build:
	$(MAKE) -C src/thread
	$(MAKE) -C src/main

clean:
	$(MAKE) -C src/main clean
	$(MAKE) -C src/thread clean
	$(RM) bin lib
