#include "array.hh"
#include "timer.hh"

using namespace std;

void Array::add_1(int n)
{

	if (index < size-1){
		array[index++] = n;
	}
		else{
			size++;
			reallocation();
			array[index++] =n;
		}

}

void Array::add_2(int n)
{

	if (index < size-1){
		array[index++] = n;
	}
		else{
			size*=2;
			reallocation();
			array[index++] =n;
		}

}

void Array::add_3(int n)
{

	if (index < size-1){
		array[index++] = n;
	}
		else{
			size*=10;
			reallocation();
			array[index++] =n;
		}

}

void Array::reallocation()
{
	int *supp_array;
	supp_array = new int [index+1];

	for (int i = 0; i <= index; ++i)
	supp_array[i]=array[i];
	delete [] array; // zwalnianie pamieci

	array = new int [size];

	for (int i = 0; i <= index; ++i)
	array[i]=supp_array[i];
	delete [] supp_array; // zwalnianie pamieci

}

void Array::wypisz()
{
	for(int i=0; i<index; i++)
		cout << array[i] << endl;
}
void Array::pack()
{
	Timer miernik;
    int number[]={10,100,1000,1000000,100000000};

	for (int j = 0; j < 5; ++j)
    {
        cout << "dodawanie " << number[j] << " elementow" << endl;
        for (int k=0; k<10; k++)
    {
    	size=10, index=-1;
    	miernik.start();
    	for(int i=0; i<number[j]; i++)
    	{
		add_2(rand()%1000);
		
	}
	//size=10, index=-1;
	miernik.stop();
	cout << miernik.getElapsedTimeMs() << endl;
	}
    }
}
/*
    for (int j = 0; j < 5; ++j)
    {
        cout << "dodawanie " << number[j] << " elementow" << endl;
        for (int i=0; i<number[j]; i++)
    {
		add_2(rand()%1000);
	}
    }

    for (int j = 0; j < 5; ++j)
    {
        cout << "dodawanie " << number[j] << " elementow" << endl;
        for (int i=0; i<number[j]; i++)
    {
		add_3(rand()%1000);
	}
    }
}
*/