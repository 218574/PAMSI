#ifndef ILIST_HH
#define ILIST_HH

class IList
{

	virtual void push_front(int v)=0;
	virtual void push_back(int v)=0;
	virtual void pop_front()=0;
	virtual void pop_back()=0;

};
#endif