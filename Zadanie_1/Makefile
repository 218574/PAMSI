CCFLAGS = -Wall -pedantic -std=c++11 -g

start: 1
	./1
1: obj/tablica.o src/main.cpp
	g++ $(CCFLAGS) src/main.cpp obj/tablica.o -o 1

obj/tablica.o: src/tablica.cpp inc/tablica.hh
	g++ $(CCFLAGS) -c src/tablica.cpp -o obj/tablica.o
clean:
	rm -f obj/*.o
	rm 1
