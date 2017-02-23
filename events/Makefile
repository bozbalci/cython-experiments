all:
	cython *.pyx
	gcc -c -o trigger.o trigger.c \
		$(shell python-config --cflags --ldflags)
	gcc -o main main.c trigger.o \
		$(shell python-config --cflags --ldflags)

clean:
	rm -rf trigger.c trigger.h trigger.o main __pycache__
