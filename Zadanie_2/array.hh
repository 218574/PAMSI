#ifndef ARRAY_HH
#define ARRAY_HH

#include <iostream>
#include <cstdlib>
#include "runnable.hh"

using namespace std;

class Array
	{
		int *array;
		int size=10;
		int index=-1;
		void reallocation();

		public:
			Array() { array = new int [size];}
			~Array() { delete [] array;}

			void add_1(int n);
			void add_2(int n);
			void add_3(int n);
			void wypisz();
			virtual void pack();
	};

	#endif
