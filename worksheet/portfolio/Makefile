
shapes: shapes.o main.o
	gcc shapes.o main.o -o shapes -lm

clean: 
	rm -f shapes shapes.o main.o

shapes.o: shapes.c shapes.h
main.o: main.c shapes.h
