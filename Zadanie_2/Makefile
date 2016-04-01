CCFLAGS = -Wall -pedantic -std=c++11 -g

start: Zadanie2
	./Zadanie2
Zadanie2: array.o timer.o runnable.o main.cpp
	g++ $(CCFLAGS) main.cpp array.o runnable.o timer.o -o Zadanie2

array.o: array.cpp array.hh
	g++ $(CCFLAGS) -c array.cpp -o array.o

runnable.o: runnable.cpp runnable.hh
	g++ $(CCFLAGS) -c runnable.cpp -o runnable.o

timer.o: timer.cpp timer.hh
	g++ $(CCFLAGS) -c timer.cpp -o timer.o
clean:
	rm -f obj/*.o
	rm Zadanie2
