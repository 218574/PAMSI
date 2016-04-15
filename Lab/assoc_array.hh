#ifndef ASSOC_ARRAY_HH
#define ASSOC_ARRAY_HH

#define BUCKETS =5;

#include "list.hh"
#include <iostream>
#include <string.h>

using namespace std;

class Assoc_array
private:
	List *list_array[BUCKETS];
	int hash(string);
	int value;
protected:
	void find(string *key);
	void insert(string *key, int value);

public:

	virtual string operator[] (string);
	virtual &string operator[] (string);

	Assoc_array();
	~Assoc_array();
	
};

#endif