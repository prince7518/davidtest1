CFLAGS=-fPIC
all: main

main: main.o libfoo.so
libfoo.so: libfoo.o
	$(CC) -shared -fPIC $^ -o $@
clean:
	rm -f *.o main *.so
