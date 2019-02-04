CFLAGS = -Wall -std=c++11
main: prog1.o main.o
	g++ $(CFLAGS) prog1.o main.o -o main

prog1.o: prog1.cc prog1.h
	g++ -c $(CFLAGS) prog1.cc

main.o: main.cc prog1.h
	g++ -c $(CFLAGS) main.cc

clean:
	rm *.o main
