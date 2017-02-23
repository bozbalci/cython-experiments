all:
	cython *.pyx
	gcc -shared -fPIC -o greet.so greet.c greeter.c \
		$(shell python-config --cflags --ldflags)

clean:
	rm -f *.so greet.c
