#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  int n,wybor;
srand(time(NULL));
cout << "1. Tworzenie tablicy" << endl;
cout << "2. Zakończ" << endl;
cin >> wybor;
switch (wybor) {
  case(1):
  {
    cout << "Podaj ile ma byc liczb w tablicy: ";
    cin >> n;

clock_t start = clock(); // Rozpoczencie odmierzania czasu

int *tablica = new int [n]; //Tworzenie tablicy dynamicznej o okreslonym rozmiarze.

for(int i=0; i<n; i++)
tablica[i] = rand(); // Wypelnienie tablicy losowymi liczbami

for(int i=0; i<n; i++)
cout << tablica[i] << endl;
cout << "Czas wykonania programu: " << (clock() - start) << "ms" << endl; // zakonczenie odmierzania czasu

delete [] tablica;//Usuwanie tablicy
tablica = NULL;
  }
  case(2):
  {
    exit(0);
  }
}
}
