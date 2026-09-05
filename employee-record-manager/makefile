# Denys Odoviychuk
# Section 3
# Spring 2026
# Project Makefile

RM = rm -rf
MKDIR_P = mkdir -p

.PHONY: all setup build clean

all: setup build

setup:
	@$(MKDIR_P) bin lib

build:
	$(MAKE) -C src/utils
	$(MAKE) -C src/lab9

clean:
	$(MAKE) -C src/lab9 clean
	$(MAKE) -C src/utils clean
	$(RM) bin lib

