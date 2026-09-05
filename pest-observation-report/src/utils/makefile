# Denys Odoviychuk
# Section 3
# Spring 2026
# Utils makefile

CFLAGS = -I ../../include
RM = rm -f
AR = ar

OBJS = pestUtils.o reportFns.o
LIB = ../../lib/libUtils.a

.PHONY: all clean

all: $(LIB)

$(LIB): $(OBJS)
	$(AR) rv $@ $(OBJS)

# pestUtils.o: pestUtils.c ../../include/utils.h
pestUtils.o: pestUtils.c ../../include/utils.h
	$(CC) $(CFLAGS) -c pestUtils.c -o pestUtils.o
	
reportFns.o: reportFns.c ../../include/utils.h

clean: 
	$(RM) *.o $(LIB)
