#include "../inc/queue.hh"

using namespace std;

Queue::Queue(int x)
{
	queue_size = x;
	queue_array = new int [x];
	number=number_front=number_back = 0;
}

bool Queue::empty(void)
{
	return !number;
}

void Queue::push(int element)
{
	int i;
  	if(number < queue_size)
  		{
   			 i = number_back + number_front++;
   			 if(i >= queue_size) i -= queue_size;
   			 queue_array[i] = element;
 		}
 		else
 			{
	  		  (*this).add_size();
	    		i = number_back + number_front++;
	    if(i >= queue_size) i -= queue_size;
	    queue_array[i] = element;
  }
}

void Queue::pop(void)
{
	if(number_front)
  		{
    	number_front--;
    	number_back++;
    	if(number_front == queue_size) number_front = 0;
  }
}

int Queue::front_element()
{
	  if(number) return queue_array[number];
  		return -MAX_INT;
}

void Queue::add_size()
{
	int new_size = 10*queue_size;
	int *supp_array = new int [new_size];

	for(int i=0; i<queue_size; i++)
	{
		supp_array[i] = queue_array[i];
	}
	queue_size = new_size;
	delete [] queue_array;
	queue_array = supp_array; 
}