#include "../inc/array.hh"
#include "../inc/timer.hh"

using namespace std;

void Array::add_1(int n)
{
	int new_size = size+1;
	int *supp_array = new int [new_size];

	for(int i=0; i<size; i++)
	{
		supp_array[i]=array[i];
	}
	size = n;
	delete [] array;
	array = supp_array;

}

void Array::add_2(int n)
{
	int new_size = size*2;
	int *supp_array = new int [new_size];

	for(int i=0; i<size; i++)
	{
		supp_array[i]=array[i];
	}
	size = n;
	delete [] array;
	array = supp_array;
}

void Array::add_3(int n)
{
	int new_size = size*10;
	int *supp_array = new int [new_size];

	for(int i=0; i<size; i++)
	{
		supp_array[i] = array[i];
	}
	size = n;
	delete [] array;
	array = supp_array;
}

void Array::pack()
{
	Timer s;
    int number[]={10,100,1000,1000000,100000000};


    string const results("scores.txt");
    ofstream save_result(results.c_str());

//Powiekszanie dziesieciokrotne tablicy po zapelnieniu
	for (int j = 0; j < 5; j++)
    {
   	cout << "Dziesieciokrotne powiekszanie tablicy po zapelnieniu: " << endl;
    save_result << "Dziesieciokrotne powiekszanie tablicy po zapelnieniu: " << endl;

        double average=0;
        cout << "Dodawanie " << number[j] << " elementow" << endl;
        save_result << "Dodawanie " << number[j] << " elementow" << endl;

        for (int k=0; k<10; k++)
    {
    	s.start();

    	for(int i=0; i<number[j]; i++)
    	{
		add_3(rand()%1000);
		}
	
	s.stop();
	//save_result << s.getElapsedTimeMs() << endl;
    average += s.getElapsedTimeMs()/10;
	}
	save_result << "Srednia z 10 pomiarow: ";
	save_result << average << endl << endl;
	

//Powiekszanie dwukrotne tablicy po zapelnieniu
    cout << "Dwukrotne powiekszanie tablicy po zapelnieniu: " << endl;
    save_result << "Dwukrotne powiekszanie tablicy po zapelnieniu: " << endl;

        average=0;
        cout << "Dodawanie " << number[j] << " elementow" << endl;
        save_result << "Dodawanie " << number[j] << " elementow" << endl;

        for (int k=0; k<10; k++)
    {
    	s.start();

    	for(int i=0; i<number[j]; i++)
    	{
		add_2(rand()%1000);
		}

	s.stop();
	//save_result << s.getElapsedTimeMs() << endl;
	average += s.getElapsedTimeMs()/10;
	}
    save_result << "Srednia z 10 pomiarow: ";
	save_result << average << endl << endl;
    

    //Powiekszanie tablicy o 1
    cout << "Powiekszanie tablicy o 1 po zapelnieniu: " << endl;
    save_result << "Powiekszanie tablicy o 1 po zapelnieniu: " << endl;
    
        average=0;
        cout << "Dodawanie " << number[j] << " elementow" << endl;
        save_result << "Dodawanie " << number[j] << " elementow" << endl;

        for (int k=0; k<10; k++)
    {
    	s.start();
    	for(int i=0; i<1000000;/*number[j];*/ i++)
    	{
		this->add_1(rand()%1000);
		}
		s.stop();

	//save_result << s.getElapsedTimeMs() << endl;
	average += s.getElapsedTimeMs()/10;
	}
    save_result << "Srednia z 10 pomiarow: ";
	save_result << average << endl << endl;
	}
	
}
