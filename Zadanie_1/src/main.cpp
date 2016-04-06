#include <iostream>
#include "../inc/tablica.hh"
#include <cstdlib>
#include <iomanip>

#define MAX_SIZE 100000000 // maksymalny rozmiar tablicy

using namespace std;

double sekundy(clock_t czas)
{
	return static_cast < double >(czas) / CLOCKS_PER_SEC;
}

int main()
{

/********************
Wypisywanie czasow dodawania okreslonej ilosci elementow do tablicy
1) 10 elementow
2) 100 elementow
3) 10000 elementow
4) 1000000 elementow
5) 100000000 elementow
********************/

	tablica w;
	for (int i = 0; i < 10; ++i)
		w.dodaj(rand()%1000);
		cout << "Czas dla 10 elementow to: " << sekundy(clock()) << "sekund" << endl;

		for (int i = 10; i < 100; ++i)
		w.dodaj(rand()%1000);
		cout << "Czas dla 100 elementow to: " << sekundy(clock()) << " sekund." << endl;

		for (int i = 100; i < 10000; ++i)
		w.dodaj(rand()%1000);
		cout << "Czas dla 10000 elementow to: " << sekundy(clock()) << " sekund." << endl;

		for (int i = 10000; i < 1000000; ++i)
		w.dodaj(rand()%1000);
		cout << "Czas dla 1000000 elementow to: " << sekundy(clock()) << " sekund." << endl;

		for (int i = 1000000; i < MAX_SIZE; ++i)
		w.dodaj(rand()%1000);
		cout << "Czas dla 100000000 elementow to: " << sekundy(clock()) << " sekund." << endl;
}
