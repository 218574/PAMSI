#include "../inc/hash.hh"
#include "../inc/timer.hh"
#include <string>
#include <fstream>

using namespace std;

int main()
{
 {
    Hash h;
    Timer s;
    int number[]={10,100,1000,10000,100000,1000000};
    string const results("scores.csv");
    ofstream save_result(results.c_str());

  for (int j = 0; j < 6; j++)
    {
    cout << "Wyszukiwanie" << endl;
    save_result << "Wyszukiwanie" << endl;

        double average=0;
        double average1=0;
        
        cout << number[j] << " elementow" << endl;
        save_result << "Czasy " << number[j] << " dla 10000 bucketów: " << endl;
    s.start();
    h.pack(number[j]);
    s.stop();
    average1 = s.getElapsedTimeMs();

      for (int k=0; k<10; k++)
    {
    s.start();
    h.search();
    s.stop();

 //save_result << s.getElapsedTimeMs() << endl;
    average += s.getElapsedTimeMs()/10;
  }
  save_result << "Srednia z 10 pomiarow(zapisywanie):" << endl;
  save_result << average1 << endl;
  save_result << "Srednia z 10 pomiarow(wyszukiwanie): " << endl;
  save_result << average << endl << endl;

}
} 
}