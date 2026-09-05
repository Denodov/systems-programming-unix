# Denys Odoviychuk
# Section 3
# Spring 2026

RM = rm -f
MKDIR_P = mkdir -p

.PHONY: all setup clean

all: setup utils bitwise

setup:
	@$(MKDIR_P) bin lib

utils:
	$(MAKE) -C src/utils

bitwise:
	$(MAKE) -C src/bitwise

clean:
	$(MAKE) -C src/utils clean
	$(MAKE) -C src/bitwise clean
	$(RM) bin/bitwise lib/libutils.a lab6.out
