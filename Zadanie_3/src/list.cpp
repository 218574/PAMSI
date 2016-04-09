#include "../inc/list.hh"

using namespace std;

List::List(int x)
{
	list_size=x;
	list_array = new int [x];
	front_pointer=back_pointer=number=0;
}

bool List::empty(void)
{
	return !number;
}

//List::push_front(int element){};

void List::push_back(int element)
{
	int i;
	if(number < list_size)
	{
		i = back_pointer + number++;
		if(i >=list_size) i -= list_size;
		list_array[i] = element;
	}
	else
	{
		(*this).add_size();
		i = back_pointer + number++;
		if(i >= list_size) i -= list_size;
		list_array[i] = element;
	}
}

void List::pop_back()
{
	if(number)
	{
		number--;
		back_pointer--;
		if(back_pointer == list_size) back_pointer = 0;
	}
}

void List::pop_front()
{
	if(number)
	{
		number--;
		front_pointer++;
		if(front_pointer == list_size){
			front_pointer = 0;
		}
	}
}

int List::front_element(void)
{
  if(number) return list_array[front_pointer];
  return -MAX_INT;
}

void List::add_size()
{
	int new_size = 10*list_size;
	int *supp_array = new int [new_size];

	for(int i=0; i<list_size; i++)
	{
		supp_array[i] = list_array[i];
	}
	list_size = new_size;
	delete [] list_array;
	list_array = supp_array; 
}