#include <iostream>
#include <cstdlib>

using namespace std;;

class stoper
{

private:
	double czas_start;
	double czas_stop;
	bool dziala = false;


public:

void start() {stoper_start = static_cast < double >(clock()) / CLOCKS_PER_SEC; dziala = false;}
void stop();
double czas_dzialania() {return (stoper_start - stoper_stop)/CLOCKS_PER_SEC;}

};