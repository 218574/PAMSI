#ifndef GRAF_HH
#define GRAF_HH

#include <iostream>
#include "Igraf.hh"

class Graf: public Igraf
{
	int V, E;
	node *xPrev, *xNext, *yPrev, *yNext;
	node **Lists;

public:
	Graf(int V);
    ~Graf();
    void  add_edge(int x, int y);
    bool search(int x,int y);
};
#endif