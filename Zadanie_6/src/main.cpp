#include "../inc/drzewo_binarne.hh"
#include "../inc/timer.hh"
#include <fstream>

using namespace std;

int main()
{
  int Tk[]={10,100,1000,10000,100000,1000000,10000000};
  Tree * object;         // Obiekt drzewa czerwono-czarnego
    string const results("scores.csv");
    ofstream save_result(results.c_str());

  Timer c;
  
for(int j=0; j<7; j++)
  {
    double average=0;
    double average1=0;
for(int k=0; k<10; k++)
{
  object = new Tree;     // Tworzymy puste drzewo
  for(int i = 0; i < Tk[j]; i++) // Na podstawie tablicy tworzymy drzewo czerwono-czarne
  {
    c.start();
    object->insert(rand()%1000);
    c.stop();
  }
  average += c.getElapsedTimeMs()/10;

    c.start();
    object->find(rand()%1000);
    c.stop();

  average1 += c.getElapsedTimeMs()/10;

  delete object;
}
cout << Tk[j] << endl;
  save_result << "Srednia z zapisu "<< Tk[j] << " elementow:" << endl;
  save_result << average << endl << endl;
  save_result << "Srednia z odczytu "<< Tk[j] << " elementow:"<< endl;
  save_result << average1 << endl << endl;
}
} 
