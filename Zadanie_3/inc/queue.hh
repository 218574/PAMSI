#ifndef QUEUE_HH
#define QUEUE_HH 

#include "list.hh"

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <unistd.h>
#include <string>

// /const int MAX_INT = -2147483647;

using namespace std;

class Queue
{
	  private:
    int queue_size;      
    int number, number_front, number_back;
    int *queue_array;    

  public:
    
    Queue(int x); 
    ~Queue(){delete [] queue_array;}    

    bool empty(void);
    int  front_element(void);

    void push(int element);
    void pop(void);

    void add_size();
};

#endif