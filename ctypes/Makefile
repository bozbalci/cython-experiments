all: pyexample cexample

pyexample:
	cython *.pyx
	gcc -o integrate.so integrate.c -fPIC -shared \
		$(shell python-config --cflags --ldflags)

cexample:
	gcc -o example example.c -lm

clean:
	rm -f *.so *.o integrate.c example
