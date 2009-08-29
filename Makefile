CC = gcc
CFLAGS = -I include
LDFLAGS =

vpath %.h include
vpath %.c src

all: bowling.o main.o
	 gcc -C bowling.o main.o -o bowling

.PHONY: tests
tests:
	make
	make -C test
	cd test && ./AllTests

.PHONY: clean
clean:
	rm -f bowling *.o

	





