#include "../inc/hash.hh"

using namespace std;

Hash::Hash()
{
    srand(time(NULL));
  // Zerujemy tablicę haszowaną
  for(i = 0; i < 500; i++) T[i] = NULL;

}
void Hash::pack(int n)
{
  for(i = 0; i < n; i++)
  {
    s = "";
    for(j = 0; j < 6; j++) s += 65 + (rand() % 26);

    h = hf(s);
    p = T[h];
    t = true;

    if(p)
      while(true)
      {
        if(p->data == s)
        {
          t = false;
          break;
        }
        if(!p->next) break;
        p = p->next;
      }

    if(t)
    {
      r = new slistEl;
      r->data = s;
      r->next = NULL;
      if(!p) T[h] = r;
      else p->next = r;
    }
  }
}

void Hash::search()
{
    h = hf(s);
    c = 0;
    p = T[h];
    while(p && (p->data != s))
    {
      c++;
      p = p->next;
    }

    for(i = 6; i > 0; i--)
    {
      s[i - 1] = s[i - 1] + 1;
      if(s[i - 1] <= 'Z') break;
      s[i - 1] = 'A';
    } 
  }

Hash::~Hash() //Zwalnianie pamieci
{

  for(i = 0; i < 500; i++)
    while((p = T[i]))
    {
      T[i] = p->next;
      p->data = "";
      delete p;
    }

}