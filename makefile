cc=gcc

main: main.o push.o pop.o empty.o full.o display.o tos.o
	$(cc) -o main main.o push.o pop.o empty.o full.o display.o tos.o

main.o: main.c
	$(cc) -o main.o -c main.c

push.o: push.c
	$(cc) -o push.o -c push.c	

pop.o: pop.c
	$(cc) -o pop.o -c pop.c

empty.o: empty.c
	$(cc) -o empty.o -c empty.c

full.o: full.c
	$(cc) -o full.o -c full.c

display.o: display.c
	$(cc) -o display.o -c display.c

tos.o: tos.c
	$(cc) -o tos.o -c tos.c	

clean:
	rm -rf *.o main