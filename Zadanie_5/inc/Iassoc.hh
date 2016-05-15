#ifndef IASSOC_HH
#define IASSOC_HH

#include <iostream>

using namespace std;

class IAssoc
{
public:
	virtual void pack(int n)=0;
	virtual void search()=0;
	
};
#endif