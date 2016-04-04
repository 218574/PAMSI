CCFLAGS = -Wall -pedantic -std=c++11 -g

start: Zadanie2
	./Zadanie2
Zadanie2: obj/array.o obj/timer.o obj/runnable.o src/main.cpp
	g++ $(CCFLAGS) src/main.cpp obj/array.o obj/runnable.o obj/timer.o -o Zadanie2

obj/array.o: src/array.cpp inc/array.hh
	g++ $(CCFLAGS) -c src/array.cpp -o obj/array.o

obj/runnable.o: src/runnable.cpp inc/runnable.hh
	g++ $(CCFLAGS) -c src/runnable.cpp -o obj/runnable.o

obj/timer.o: src/timer.cpp inc/timer.hh
	g++ $(CCFLAGS) -c src/timer.cpp -o obj/timer.o
clean:
	rm -f obj/*.o
	rm Zadanie2
