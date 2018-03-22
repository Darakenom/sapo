a.out: main.o sapo.o
	g++ main.o sapo.o -o a.out

main.o:
	g++ -O0 -g -Wall -ansi -pedantic -c main.cpp

sapo.o: sapo.hpp
	g++ -O0 -g -Wall -ansi -pedantic -c sapo.cpp

clean:
	rm -f *.o