#include <iostream>
#include <cstdlib>

/********************
Clasa tablicy alokowanej dynamicznie
o poczatkowym rozmiarze rownym 10.
********************/
class tablica
{
private:
	int *tablica_1;
	int rozmiar = 10;
	int index = -1;

/********************
Trzy rozne strategie pozwalające
zmieniać rozmiar zaalokowanej tablicy:
1) Zwiekszanie rozmiaru tablicy za kazdym razem o jeden.
2) Dwukrotne zwieksznie rozmiaru tablicy po zapelnieniu.
3) Dziesieciokrotne zwiekszenie rozmiaru tablicy 
po zapelnieniu.
********************/

	//void zwiekszenie_rozmiaru() {rozmiar++;}
	void zwiekszenie_rozmiaru() {rozmiar*=2;}
	//void zwiekszenie_rozmiaru() {rozmiar*=10;}

/********************
Alokowanie pamięci do nowej tablicy o powiekszonym  romiarze.
********************/

	void realloc();

public:

/********************
Konstruktor oraz destruktor
********************/

	tablica() {tablica_1 = new int [rozmiar];}
	~tablica() {delete [] tablica_1;}
	int Rozmiar () {return index+1;}

	void wpisz(); // Funkcja wpisujaca elementy do tablicy.
	void dodaj(int n); //Funkcja dodajaca elementy do tablicy.
	int usun();
	
};