all: work07.o
	gcc -o work07m work07.o

work07.o: work07.c
	gcc -c work07.c

run:
	./work07m

clean:
	rm *.o
	rm program
