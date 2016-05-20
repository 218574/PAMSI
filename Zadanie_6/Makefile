CCFLAGS = -Wall -pedantic -std=c++11 -g

start: Zadanie_5
	./Zadanie_5

Zadanie_5: obj/timer.o obj/drzewo_binarne.o src/main.cpp

	g++ $(CCFLAGS) src/main.cpp obj/timer.o obj/drzewo_binarne.o -o Zadanie_5
obj/timer.o: src/timer.cpp inc/timer.hh
	g++ $(CCFLAGS) -c src/timer.cpp -o obj/timer.o

obj/drzewo_binarne.o: src/drzewo_binarne.cpp inc/drzewo_binarne.hh inc/Idrzewo.hh
	g++ $(CCFLAGS) -c src/drzewo_binarne.cpp -o obj/drzewo_binarne.o
clean:
	rm -f obj/*.o
	rm Zadanie_5
