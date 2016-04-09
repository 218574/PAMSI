#ifndef STACK_HH
#define STACK_HH 

#include "list.hh"

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <unistd.h>
#include <string>

// /const int MAX_INT = -2147483647;

using namespace std;

class Stack
{
	  private:
    int stack_size;      
    int number;
    int *stack_array;    

  public:
    
    Stack(int x); 
    ~Stack(){delete [] stack_array;}    

    bool empty(void);
    int  top(void);

    void push(int element);
    void pop(void);

    void add_size();
};

#endif