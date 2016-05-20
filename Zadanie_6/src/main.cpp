#include "../inc/drzewo_binarne.hh"
#include "../inc/timer.hh"
#include <fstream>

//**********************
//*** PROGRAM GŁÓWNY ***
//**********************

using namespace std;

int main()
{
  //int Tk[]={10,100,1000,10000,100000,1000000};         // Tablica kluczy węzłów
  int Tk[]={10,100,1000,10000,100000,1000000,10000000};
  //int i,x,i1,i2;
  Tree * object;         // Obiekt drzewa czerwono-czarnego
    string const results("scores.csv");
    ofstream save_result(results.c_str());

  Timer c;

  //srand(time(NULL));     // Inicjujemy generator pseudolosowy

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
  //cout << "Czas zapisu " << Tk[j] <<" elementow" << endl;
  //cout << c.getElapsedTimeMs() << endl;
  //save_result << "Czas zapisu " << Tk[j] <<" elementow" << endl;
  //save_result << c.getElapsedTimeMs() << endl;
  average += c.getElapsedTimeMs()/10;

    c.start();
    object->find(rand()%1000);
    c.stop();

  // cout << "Czas odczytu elementu" << endl;
  //cout << c.getElapsedTimeMs() << endl;
  //save_result << "Czas odczytu elementu" << endl;
  //save_result << c.getElapsedTimeMs() << endl;
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
