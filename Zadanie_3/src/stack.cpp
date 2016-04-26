//#include "../inc/list.hh"
#include "../inc/stack.hh"

//------------------------------------
// Metody obiektu listy dwukierunkowej
//------------------------------------

// Inicjuje pola zmiennej listy
//-----------------------------
Stack::Stack()
{
  head  = tail  = NULL;
  count = 0;
}

// Usuwa listę z pamięci
//----------------------
Stack::~Stack()
{
  while(count) pop_front();
}

// Wyświetla zawartość elementów listy
//----------------------------------------------
void Stack::print_stack()
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

// Dodaje nowy element na początek stosu
//------------------------------------------------
void Stack::push_front(int v)
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

// Usuwa element z początku stosu
//-------------------------------
void Stack::pop_front()
{
  if(count) remove(head);
}