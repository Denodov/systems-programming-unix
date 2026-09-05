# Denys Odoviychuk
# Section 3
# Spring 2026
# utils makefile

CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I../../include
AR = ar
RM = rm -f

OBJS = convUtils.o bitwiseOps.o
LIB = ../../lib/libutils.a

all: $(LIB)

$(LIB): $(OBJS)
	#$(AR) rcs $(LIB) $(OBJS)
	$(AR) rv $@ $?

convUtils.o: convUtils.c ../../include/lab6.h
	$(CC) $(CFLAGS) -c convUtils.c

bitwiseOps.o: bitwiseOps.c ../../include/lab6.h
	$(CC) $(CFLAGS) -c bitwiseOps.c

clean:
	$(RM) *.o
