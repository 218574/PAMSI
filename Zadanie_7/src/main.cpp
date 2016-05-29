#include <iostream>
#include "../inc/graf.hh"
#include "../inc/timer.hh"
#include <string>
#include <fstream>

using namespace std;

int main()
{

Timer s;
Graf o;

//int number[]={10,100,1000,10000,100000};//,1000000};
int number[]={10,100,1000,10000,100000,1000000};
  double average=0;
  double average1=0;

   string const results("scores.csv");
   ofstream save_result(results.c_str());

for (int j = 0; j < 6; j++)
    {
    	for(int k=0;k<10;k++)
    	{
 //cout << number[j] << endl;

  o.prepare(number[j]);
  s.start();
  o.DFS(1);
  s.stop();
  average += s.getElapsedTimeMs();

  //cout << s.getElapsedTimeMs() << " odczyt DFS" << endl;

  o.prepare(number[j]);
  s.start();
  o.BFS(1);
  s.stop();
  average1 += s.getElapsedTimeMs();
  //cout << number[j] << endl;
  //cout << s.getElapsedTimeMs() << " odczyt BFS" << endl;
		}
		cout << number[j] << endl;
		cout << average << endl << " odczyt DFS 10x srednia" << endl;
		cout << average1 << endl << " odczyt BFS 10x srednia" << endl;
		save_result << " Srednia DFS dla " << number[j] << " elementow: " << endl << average/10 << endl;
		save_result << " Srednia BFS dla " << number[j] << " elementow: " << endl << average1/10 << endl;
    }
}