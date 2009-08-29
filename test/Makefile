CFLAGS = -I test/cutest -I include -I ../include
LDFLAGS = 
PROJECT_OBJ = bowling.o

vpath %.c src
vpath %.c cutest
vpath %.c ../src
vpath %.h include
vpath %.h cutest
vpath %.h ../include


AllTests: AllTests.o bowling_test.o CuTest.o $(PROJECT_OBJ)

.PHONY: clean
clean:
	rm -f *.o AllTests
