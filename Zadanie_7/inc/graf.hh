#ifndef GRAF_HH
#define GRAF_HH

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

#include "Igraf.hh"

using namespace std;

struct slistEl
{
  slistEl * next;
  int v;
};

class Graf
{	
public:

 	int n,m,i,v1,v2;
  	slistEl *p,*r;      

	slistEl ** A;            
	bool * visited;          

    void prepare(int n);
    void BFS(int v);
    void DFS(int v);

    Graf();
    ~Graf();
};
#endif