#ifndef HASH_HH
#define HASH_HH


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "Iassoc.hh"


using namespace std;

struct slistEl
{
  slistEl * next;
  string data;
};

// Funkcja haszująca

class Hash: public IAssoc
{ 
  slistEl * T[500], * p, * r;
  unsigned int i,j,h,c;
  string s;
  bool t;
public:
  
unsigned int hf(string s)
{
  unsigned int h,i;

  h = 0;
  for(i = 0; i < s.length(); i++)
    h = 31 * h + s[i] - 65;
  return h % 500;
}

Hash();
~Hash();

virtual void pack(int n);
virtual void search();

};

#endif