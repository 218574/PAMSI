#include <iostream>

using namespace std;

struct BTNode
{
  BTNode * left;
  BTNode * right;
  int level;
  int data;
};

class Drzewo
{
  Drzewo();
  ~Drzewo();

  // Zmienne globalne

  int maxpath = 0;              // długość najdłuższej ścieżki / wysokość drzewa
  int minpath = 2147483647;     // długość najkrótszej ścieżki
  int * levelcount;             // tablica liczników
  int leafcount = 0;            // liczba liści
  int onechildcount = 0;        // liczba węzłów z jedynakiem
  int nodesum = 0;              // suma danych węzłów

  int n;                        // liczba węzłów
  BTNode * root;             // wskazanie korzenia drzewa

  void readBT(int k);
  void DFS(BTNode * v);
  void writeBT();
  void DFSRelese(BTNode *v)
};