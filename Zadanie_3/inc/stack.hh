#ifndef STACK_HH
#define STACK_HH 

#include "list.hh"
#include "Ilist.hh"

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <unistd.h>
#include <string>

// /const int MAX_INT = -2147483647;

using namespace std;

class Stack: public List
{
     Stack();
     ~Stack();

     void push_front(int v);
     void pop_front();
     void print_stack();

     ListEl * find_first(int v);
};

#endif