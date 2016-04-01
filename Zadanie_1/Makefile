CCFLAGS = -Wall -pedantic -std=c++11 -g

start: 1
	./1
1: tablica.o main.cpp
	g++ $(CCFLAGS) main.cpp tablica.o -o 1

tablica.o: tablica.cpp tablica.hh
	g++ $(CCFLAGS) -c tablica.cpp -o tablica.o
clean:
	rm -f obj/*.o
	rm 1
