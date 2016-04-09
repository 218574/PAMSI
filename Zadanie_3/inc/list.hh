#ifndef LIST_HH
#define LIST_HH 

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <unistd.h>
#include <string>

const int MAX_INT = -2147483647;

using namespace std;

class List
{
private:
	int list_size;  // rozmiar listy
	int front_pointer; // wskaznik poczatek
	int back_pointer; // wskaznik koniec
	int number; // ilosc elementow na liscie
	int *list_array; //przechowywanie danych jako lista jednokierunkowa
public:


	List(int array_size);
	~List(){delete [] list_array;}

	bool empty(void);

	//void push_front(int element);
	void pop_front(void);
	int front_element(void);

	void push_back(int element);
	void pop_back(void);

	void add_size();
	
};

#endif