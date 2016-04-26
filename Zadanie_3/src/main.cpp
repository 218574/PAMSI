#include <fstream>
#include <string>

#include "../inc/list.hh"
#include "../inc/timer.hh"
//#include "../inc/test.hh"

using namespace std;

int main()
{
  List L;
  ListEl * p;
  int v=0;

  	Timer s;
    int number[]={10,100,1000,1000000,100000000};
    string const results("scores.csv");
    ofstream save_result(results.c_str());

	for (int j = 0; j < 5; j++)
    {
   	cout << "Przeszukiwanie listy" << endl;
    save_result << "Przeszukiwanie listy " << endl;

        double average=0;
        cout << "Przeszukiwanie " << number[j] << " elementow" << endl;
        save_result << "Przeszukiwanie " << number[j] << " elementow" << endl;

		for(int i = 0; i < number[j]; i++) L.push_front(rand()%1000);
        for (int k=0; k<10; k++)
    {
    	s.start();
  do
  {
    p = L.find_first(v);
  }
  while(p);

  s.stop();
	save_result << s.getElapsedTimeMs() << endl;
    average += s.getElapsedTimeMs()/10;
	}
	save_result << "Srednia z 10 pomiarow: ";
	save_result << average << endl << endl;
	for(int i = 0; i < number[j]; i++) L.pop_back();

}
} 