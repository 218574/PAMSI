#include "../inc/stack.hh"

using namespace std;

Stack::Stack(int x)
{
	stack_size = x;
	stack_array = new int [x];
	number = 0;
}

bool Stack::empty(void)
{
	return !number;
}

void Stack::push(int element)
{
	 if(number < stack_size) stack_array[number++] = element;
  else
  {
	  (*this).add_size();
	  stack_array[number++] = element;
  }
}

void Stack::pop()
{
	if(number) number--;
}

int Stack::top()
{
	  if(number) return stack_array[number - 1];
  		return -MAX_INT;
}

void Stack::add_size()
{
	int new_size = 10*stack_size;
	int *supp_array = new int [new_size];

	for(int i=0; i<stack_size; i++)
	{
		supp_array[i] = stack_array[i];
	}
	stack_size = new_size;
	delete [] stack_array;
	stack_array = supp_array; 
}