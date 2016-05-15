CCFLAGS = -Wall -pedantic -std=c++11 -g

start: Zadanie_4
	./Zadanie_4

Zadanie_4: obj/timer.o obj/hash.o src/main.cpp
	g++ $(CCFLAGS) src/main.cpp obj/timer.o obj/hash.o -o Zadanie_4

obj/timer.o: src/timer.cpp inc/timer.hh
	g++ $(CCFLAGS) -c src/timer.cpp -o obj/timer.o

obj/hash.o: src/hash.cpp inc/hash.hh inc/Iassoc.hh
	g++ $(CCFLAGS) -c src/hash.cpp -o obj/hash.o
clean:
	rm -f obj/*.o
	rm Zadanie_4
