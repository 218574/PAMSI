//#include "../inc/list.hh"
#include "../inc/queue.hh"

//------------------------------------
// Metody obiektu listy dwukierunkowej
//------------------------------------

// Inicjuje pola zmiennej listy
//-----------------------------
Queue::Queue()
{
  head  = tail  = NULL;
  count = 0;
}

// Usuwa listę z pamięci
//----------------------
Queue::~Queue()
{
  while(count) pop_front();
}

// Wyświetla zawartość elementów listy
//----------------------------------------------
void Queue::print_queue()
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

// Dodaje nowy element na koniec kolejki
//----------------------------------------------
void Queue::push_back(int v)
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

// Usuwa element z początku kolejki
//-------------------------------
void Queue::pop_front()
{
  if(count) remove(head);
}