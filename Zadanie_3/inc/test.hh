#ifndef TEST_HH
#define TEST_HH

#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include <fstream>

#include "list.hh"
#include "stack.hh"
#include "queue.hh"
#include "timer.hh"

using namespace std;

class Test
{
	fstream data;
	fstream scores;
	int item;

public:
	void generate_numbers(int how_many, int field);
	void test_list(List *test_pointer, int laps, int how_many_numbers);

	Test()
	{
		scores.open("scores.txt",ios::out | ios::trunc);
		if(scores.good() == true){}
			else cout << "Blad dostepu do pliku!" << endl;
				scores.close();
	}
	
};

#endif