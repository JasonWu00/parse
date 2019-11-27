all: main.o parse.o
	gcc -o testfile main.o

main.o: main.c parse.h
	gcc -c main.c

parse.o: parse.c parse.h
	gcc -c parse.c

run:
	./testfile

clean:
	rm -rf *.o
	rm -rf testfile
