CFLAGS ?= -Iinc
LDFLAGS ?= -Llib -lfoo
all: main

.PHONY: lib
lib:
	make -C lib
main: main.o lib
	$(CC) main.o $(LDFLAGS) -o main 

clean:
	rm -f *.o main
	make -C lib clean
