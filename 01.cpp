#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

int n,m,zakres;

  cout << "Podaj ilosc wierszy tablicy: ";
  cin >> n;
  cout << "Podaj ilosc kolumn tablicy: ";
  cin >> m;
  cout << "Podaj zakres tablicy 0- ";
  cin >> zakres;
srand(time(0));
  int **tablica = new int *[n];
  for (int i =0; i < n; i++)
  {
    tablica[i] = new int [m];
    for (int j = 0; j < m; j++)
    tablica[i][j]=rand()%zakres;
  }
  for (int i=0; i<n; i++, cout << endl)
  for (int j=0; j<m; j++)
  cout << tablica[i][j] << '\t';

  cout << "Najwieksza wartosc w tablicy to:" << endl;
  
}
