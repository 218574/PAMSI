#include <iostream>
#include "drzewo_binarne.hh"

using namespace std;

void readBT(int k)
{
  BTNode ** vp;     // tablica wskaźników
  int i,d,l,r;

  n=rand()%1000            // odczytujemy liczbę węzłów drzewa binarnego

for(n=0, n<k, n++)
{
  vp = new BTNode * [n]; // tworzymy tablicę dynamiczną wskaźników

  for(i = 0; i < n; i++)
    vp[i] = new BTNode; // tworzymy dynamicznie węzeł

  for(i = 0; i < n; i++)
  {
    cin >> d >> l >> r;    // odczytujemy trójkę liczb
    vp[i]->level = 0;      // zerujemy poziom węzła
    vp[i]->data = d;       // wprowadzamy do węzła dane
    vp[i]->left  = l ? vp[l]: NULL;  // ustawiamy lewego syna, jeśli istnieje
    vp[i]->right = r ? vp[r]: NULL;  // ustawiamy prawego syna, jeśli istnieje
  }

  root = vp[0];           // zapamiętujemy korzeń drzewa

  delete [] vp;           // usuwamy tablicę wskaźników

  // tworzymy tablicę liczników elementów na poziomach

  levelcount = new int[n];
  for(i = 0; i < n; i++) levelcount[i] = 0;
}
}

// Procedura przechodzi drzewo algorytmem DFS:preorder
// i odpowiednio przetwarza węzły zapisując wyniki
// w zmiennych globalnych
//----------------------------------------------------
void DFS(BTNode * v)
{
  if(v)
  {
     // przetwarzamy bieżący węzeł

    int children = 0; // liczba dzieci, 0, 1 lub 2

    if(v->left)
    {
      children++;
      v->left->level = v->level + 1;
    }

    if(v->right)
    {
      children++;
      v->right->level = v->level + 1;
    }

    // test na najdłuższą ścieżkę

    if(v->level > maxpath) maxpath = v->level;

    // test na najkrótszą ścieżkę do liścia i zliczanie liści

    if(!children)
    {
      if(v->level < minpath) minpath = v->level;
      leafcount++;
    }

    // zliczanie węzłów na bieżącym poziomie poziomie

    levelcount[v->level]++;

    // zliczanie węzłów z jednym synem

    if(children == 1) onechildcount++;

    // sumowanie zawartości węzłów

    nodesum += v->data;

    DFS(v->left);  // przechodzimy lewe poddrzewo
    DFS(v->right); // przechodzimy prawe poddrzewo
  }
}

// Procedura wyświetla wyniki końcowe
//-----------------------------------
void writeBT()
{
  cout << endl
       << "maxpath       = " << maxpath << endl
       << "minpath       = " << minpath << endl
       << endl;
  for(int i = 0; i <= maxpath; i++)
    cout << "level " << i << " : number of nodes = " << levelcount[i] << endl;
  cout << endl
       << "leafcount     = " << leafcount << endl
       << "onechildcount = " << onechildcount << endl
       << "nodesum       = " << nodesum << endl
       << endl;
}

// Procedura DFS:postorder usuwająca drzewo
//-----------------------------------------
void DFSRelease(BTNode * v)
{
  if(v)
  {
    DFSRelease(v->left);   // usuwamy lewe poddrzewo
    DFSRelease(v->right);  // usuwamy prawe poddrzewo
    delete v;              // usuwamy sam węzeł
  }
}

// Procedura sprząta pamięć
//-------------------------
void deleteBT()
{
  delete [] levelcount;
  DFSRelease(root);   // wykorzystujemy DFS:postorder do usunięcia drzewa
}

//**********************
//*** PROGRAM GŁÓWNY ***
//**********************

int main()
{
  readBT();    // odczytaj i utwórz drzewo
  DFS(root);   // przetwórz drzewo
  writeBT();   // wypisz wyniki
  deleteBT();  // posprzątaj pamięć

  return 0;
} 