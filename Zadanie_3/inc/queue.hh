#ifndef QUEUE_HH
#define QUEUE_HH 

#include "list.hh"
#include "Ilist.hh"

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <unistd.h>
#include <string>

// /const int MAX_INT = -2147483647;

using namespace std;

class Queue: public List
{
	 Queue();
     ~Queue();

     void push_back(int v);
     void pop_front();
     void print_queue();

     ListEl * find_first(int v);
};

#endif