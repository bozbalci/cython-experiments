all:
	cython *.pyx
	gcc -c -o glue.o glue.c $(shell python-config --cflags --ldflags)
	gcc -o main main.c glue.o $(shell python-config --cflags --ldflags)

clean:
	rm -f glue.h glue.c main glue.o
