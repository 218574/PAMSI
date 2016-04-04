#include "stoper.hh"

using namespace std;

void stoper::stop()
{
if (dziala)
{
	czas_stop = static_cast <double> (clock());
}
	else
	{
	cerr << "Stoper już nie dziala" << endl;
	dziala =false;
	}
}

