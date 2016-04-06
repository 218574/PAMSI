#include "tablica.hh"

using namespace std;
/********************
Funkcja wpisujaca elementy do tablicy
********************/
void tablica::wpisz()
{
	for (int i = 0; i < rozmiar; ++i)
	{
		cout << tablica_1[i] << endl;
	}
}
/********************
Funkcja dodajaca elementy do tablicy
********************/
void tablica::dodaj(int n)
{
	if (index < rozmiar-1) 

	tablica_1[++index] = n;
	
	else
	{
	zwiekszenie_rozmiaru();
	realloc();
	tablica_1[++index] = n;
	}
}
/********************
Funkcja alokujaca tablice_1 do nowej tablicy 
o zwiekszonym rozmiarze tablica_2
********************/
void tablica::realloc()
{
	int *tablica_2;
	tablica_2 = new int [index+1];

	for (int i = 0; i <= index; ++i)
	tablica_2[i]=tablica_1[i];
	delete [] tablica_1; // zwalnianie pamieci

	tablica_1 = new int [rozmiar];

	for (int i = 0; i <= index; ++i)
	tablica_1[i]=tablica_2[i];
	delete [] tablica_2; // zwalnianie pamieci

}

int tablica::usun()
{
	int n;

	if (index==-1)
		return 0;
	else
	{
		n = tablica_1[index];
		return n;
	}
}