# Denys Odoviychuk
# Section 3
# Spring 2026

# Top Level Makefile

RM = rm -rf
MKDIR_P = mkdir -p

.PHONY: all setup targets clean

all: setup targets

setup:
	@$(MKDIR_P) bin

targets: 
	$(MAKE) -C src/lab10P
	$(MAKE) -C src/lab10C

clean: 
	$(MAKE) -C src/lab10P clean
	$(MAKE) -C src/lab10C clean
	$(RM) bin
