#include "../inc/list.hh"

//------------------------------------
// Metody obiektu listy dwukierunkowej
//------------------------------------

// Inicjuje pola zmiennej listy
//-----------------------------
List::List()
{
  head  = tail  = NULL;
  count = 0;
}

// Usuwa listę z pamięci
//----------------------
List::~List()
{
  while(count) pop_front();
}

// Wyświetla zawartość elementów listy
//----------------------------------------------
void List::print_list()
{
  ListEl * p;

  cout << setw(3) << count << " : ";
  p = head;
  while(p)
  {
    cout << p->data << ' ';
    p = p->next;
  }
  cout << endl;
}

// Dodaje nowy element na początek listy
//------------------------------------------------
void List::push_front(int v)
{
  ListEl * p;

  p = new ListEl;
  p->data = v;
  p->prev = NULL;
  p->next = head;
  head  = p;
  count++;
  if(p->next) p->next->prev = p;
  else tail = p;
}

// Dodaje nowy element na koniec listy
//----------------------------------------------
void List::push_back(int v)
{
  ListEl * p;

  p = new ListEl;
  p->data = v;
  p->next = NULL;
  p->prev = tail;
  tail  = p;
  count++;
  if(p->prev) p->prev->next = p;
  else head = p;
}

// Dodaje nowy element przed wybranym
//-----------------------------------
void List::insert_before(ListEl * e, int v)
{
  ListEl * p;

  if(e == head) push_front(v);
  else
  {
    p = new ListEl;
    p->data = v;
    p->next = e;
    p->prev = e->prev;
    count++;
    e->prev->next = p;
    e->prev = p;
  }
}

// Dodaje nowy element za wybranym
//--------------------------------
void List::insert_after(ListEl * e, int v)
{
  ListEl * p;

  if(e == tail) push_back(v);
  else
  {
    p = new ListEl;
    p->data = v;
    p->next = e->next;
    p->prev = e;
    count++;
    e->next->prev = p;
    e->next = p;
  }
}

// Usuwa wybrany element z listy
//------------------------------
void List::remove(ListEl * e)
{
  count--;
  if(e->prev) e->prev->next = e->next;
  else        head = e->next;
  if(e->next) e->next->prev = e->prev;
  else        tail = e->prev;
  delete e;
}

// Usuwa element z początku listy
//-------------------------------
void List::pop_front()
{
  if(count) remove(head);
}

// Usuwa element z końca listy
//----------------------------
void List::pop_back()
{
  if(count) remove(tail);
}

// Wyszukuje pierwsze wystąpienie elementu v
//------------------------------------------
ListEl *List::find_first(int v)
{
  ListEl * p;
  push_back(v);   // wstawiamy wartownika na koniec listy
  p = head;
  while(p->data != v) p = p->next;
  if(p == tail) p = NULL;
  pop_back();     // usuwamy wartownika
  return p;
}