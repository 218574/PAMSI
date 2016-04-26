#ifndef LIST_HH
#define LIST_HH

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "Ilist.hh"

using namespace std;

// Element listy
//--------------
struct ListEl
{
  ListEl * next;   // następnik
  ListEl * prev;   // poprzednik
  int data;
};

// Definicja obiektu listy dwukierunkowej
//---------------------------------------
class List: public IList
{
  public:
    ListEl * head;  // początek listy
    ListEl * tail;  // koniec listy
    unsigned count;  // licznik elementów

    List();         // konstruktor
    ~List();        // destruktor
    void print_list() ;
    void push_front(int v);
    void push_back(int v);
    void insert_before(ListEl * e, int v);
    void insert_after(ListEl * e, int v);
    void remove(ListEl * e);
    void pop_front();
    void pop_back();
    ListEl * find_first(int v);
};

#endif