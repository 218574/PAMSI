#ifndef DRZEWO_BINARNE_HH
#define DRZEWO_BINARNE_HH

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "Idrzewo.hh"

using namespace std;

// Typ węzłów drzewa RBT

struct Node
{
  Node * up;
  Node * left;
  Node * right;
  int key;
  char color;
};

// Definicja typu obiektowego TRBTree
class Tree: public ITree
{
  private:
    Node S;             // Węzeł strażnika
    Node * root;        // Korzeń drzewa czerwono-czarnego

  public:
    Tree();             // Konstruktor klasy
    ~Tree();            // Destruktor klasy
    void release(Node * p); // Usuwa rekurencyjnie drzewo
    Node * find(int k); // Wyszukuje węzeł o kluczu k
    Node * minimal(Node * p); // Wyszukuje najmniejszy węzeł w p
    Node * next(Node * p);// Wyszukuje następnik p
    void rotate_left(Node * A); // Rotacja w lewo względem A
    void rotate_right(Node * A); // Rotacja w prawo względem A
    void insert(int k);   // Wstawia węzeł o kluczu k
    void remove(Node * X); // Usuwa węzeł X
};

#endif