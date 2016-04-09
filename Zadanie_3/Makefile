CCFLAGS = -Wall -pedantic -std=c++11 -g

start: Zadanie_3
	./Zadanie_3

Zadanie_3: obj/list.o obj/stack.o obj/queue.o obj/test.o obj/timer.o src/main.cpp
	g++ $(CCFLAGS) src/main.cpp obj/list.o obj/stack.o obj/queue.o obj/test.o obj/timer.o -o Zadanie_3

obj/list.o: src/list.cpp inc/list.hh
	g++ $(CCFLAGS) -c src/list.cpp -o obj/list.o

obj/stack.o: src/stack.cpp inc/stack.hh
	g++ $(CCFLAGS) -c src/stack.cpp -o obj/stack.o

obj/queue.o: src/queue.cpp inc/queue.hh
	g++ $(CCFLAGS) -c src/queue.cpp -o obj/queue.o

obj/test.o: src/test.cpp inc/test.hh
	g++ $(CCFLAGS) -c src/test.cpp -o obj/test.o

obj/timer.o: src/timer.cpp inc/timer.hh
	g++ $(CCFLAGS) -c src/timer.cpp -o obj/timer.o
clean:
	rm -f obj/*.o
	rm Zadanie_3
