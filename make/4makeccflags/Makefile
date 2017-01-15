CC ?= arm-linux-gnueabi-gcc
LDFLAGS=-lpthread -lm
all: main
	echo "CC=$(CC)"
main: main.o main.h
	$(CC) main.o -o main $(LDFLAGS) 
clean:
	rm -f *.o main
