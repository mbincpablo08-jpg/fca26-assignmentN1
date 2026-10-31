CC = gcc
CFLAGS = -Wall -std=c11 -g

all: ex1 ex2 ex3 ex4

ex%: ex%.c
	$(CC) $(CFLAGS) -o $@ $<

# make run1 compiles and runs ex1
run%: ex%
	./ex$*

clean:
	rm -f ex1 ex2 ex3 ex4 *.exe

.PHONY: all clean
