CFLAGS=-Wall -g
SOURCES=$(wildcard *.c)
TARGETS=$(SOURCES:%.c=%.o)

all: $(TARGETS) ex19/ex19 ex22_main

ex19/ex19: ex19/object.o

ex22_main: ex22.o

clean:
	find . -type f \( -name '*.o' -o -name 'ex??' \) -exec rm {} \;
	rm -rf *.dSYM
