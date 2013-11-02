FILES = namegen.c
CC = gcc
CFLAGS = -g -Wall -O2
OBJS = namegen.o

all: $(OBJS)
	$(CC) $(CFLAGS) -o namegen $(OBJS)

clean:
	rm -f *~ *.o namegen 