all:
	cython *.pyx
	gcc -c -o kwargs.o kwargs.c \
		$(shell python-config --cflags --ldflags)
	gcc -o main main.c kwargs.o \
		$(shell python-config --cflags --ldflags)

clean:
	rm -rf kwargs.c kwargs.h *.o main __pycache__
