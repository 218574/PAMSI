#include "Stos.hh"

using namespace std;

int stos[size];
int szczyt=0;
int Element;

Stos::add(Element)
{
	cout << "Podaj element do dodania: " << Element;
	cin >> Element;

}

Stos::push(Element)
{
	if (szczyt<size)
	{
		stos[szczyt]=Element;
		szczyt++
	}
	else 
	{
		//Stos pełny
	}
}

Stos::pop()
{
	if(szczyt!=0)
	{
		szczyt-1;
		return stos[szczyt];
	}
	else 
	{
		//stos jest pusty
	}
}