#include <iostream>

 using namespace std;

 class List
 {
 protected:
 	int Element, n;
 public:
 	virtual void remove(int position)=0;
	virtual void get(int)=0;
	virtual int add(Element, int)=0;
 	virtual int size()=0;
 	
 };

