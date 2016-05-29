CCFLAGS = -Wall -pedantic -std=c++11 -g

start: Zadanie
	./Zadanie

Zadanie: obj/timer.o obj/graf.o src/main.cpp

	g++ $(CCFLAGS) src/main.cpp obj/timer.o obj/graf.o -o Zadanie
obj/timer.o: src/timer.cpp inc/timer.hh
	g++ $(CCFLAGS) -c src/timer.cpp -o obj/timer.o

obj/graf.o: src/graf.cpp inc/graf.hh inc/Igraf.hh
	g++ $(CCFLAGS) -c src/graf.cpp -o obj/graf.o
clean:
	rm -f obj/*.o
	rm Zadanie
