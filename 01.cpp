#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int n,wybor;

cout << "1. Tworzenie tablicy" << endl;
cout << "2. Zakończ" << endl;
cin >> wybor;
switch (wybor) {
  case(1):
  {
    cout << "Podaj ile ma byc liczb w tablicy: ";
    cin >> n;

int *tablica = new int [n];

for(int i=0; i<n; i++)
tablica[i] = i;

for(int i=0; i<n; i++)
cout << tablica[i] << endl;

delete [] tablica;
tablica = NULL;
  }
  case(2):
  {
    exit(0);
  }
}
}
