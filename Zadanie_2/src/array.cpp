#include "../inc/array.hh"
#include "../inc/timer.hh"

using namespace std;

void Array::add_1(int n)
{

	if (index < size-1)

		array[++index] = n;

		else
		{
			++size;
			reallocation();
			array[++index] =n;
		}

}

void Array::add_2(int n)
{

	if (index < size-1)

		array[++index] = n;

		else{
			size=size*2;
			reallocation();
			array[++index] =n;
		}

}

void Array::add_3(int n)
{
	if (index < size-1)
		array[++index] = n;
	
		else{
			size=size*10;
			reallocation();
			array[++index] =n;
		}

}

void Array::reallocation()
{
	int *supp_array;
	supp_array = new int [index+1];

	for (int i = 0; i <= index; i++){
	supp_array[i]=array[i];}

	delete [] array; // zwalnianie pamieci
    array=NULL;

	array = new int [size];

	for (int i = 0; i <= index; i++){
	array[i]=supp_array[i];}

	delete [] supp_array; // zwalnianie pamieci
    supp_array=NULL;
}

void Array::pack()
{
	Timer s;
    int number[]={10,100,1000,1000000,100000000};


    string const results("scores.txt");
    ofstream save_result(results.c_str());

//Powiekszanie dziesieciokrotne tablicy po zapelnieniu
    cout << "Dziesieciokrotne powiekszanie tablicy po zapelnieniu: " << endl;
    save_result << "Dziesieciokrotne powiekszanie tablicy po zapelnieniu: " << endl;
	for (int j = 4; j < 5; j++)
    {
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
	save_result << s.getElapsedTimeMs() << endl;
    average += s.getElapsedTimeMs()/10;
	}
	save_result << "Srednia z 10 pomiarow: ";
	save_result << average << endl << endl;
	}

//Powiekszanie dwukrotne tablicy po zapelnieniu
    cout << "Dwukrotne powiekszanie tablicy po zapelnieniu: " << endl;
    save_result << "Dwukrotne powiekszanie tablicy po zapelnieniu: " << endl;
	for (int j = 4; j < 5; j++)
	{
        double average=0;
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
	save_result << s.getElapsedTimeMs() << endl;
	average += s.getElapsedTimeMs()/10;
	}
    save_result << "Srednia z 10 pomiarow: ";
	save_result << average << endl << endl;
    }

    //Powiekszanie tablicy o 1
    cout << "Powiekszanie tablicy o 1 po zapelnieniu: " << endl;
    save_result << "Powiekszanie tablicy o 1 po zapelnieniu: " << endl;
    for (int j = 0; j < 5; j++)
    {
        double average=0;
        cout << "Dodawanie " << number[j] << " elementow" << endl;
        save_result << "Dodawanie " << number[j] << " elementow" << endl;

        for (int k=0; k<10; k++)
    {
    	s.start();

    	for(int i=0; i<number[j]; i++)
    	{
		add_1(rand()%1000);
		}

	s.stop();
	save_result << s.getElapsedTimeMs() << endl;
	average += s.getElapsedTimeMs()/10;
	}
    save_result << "Srednia z 10 pomiarow: ";
	save_result << average << endl << endl;
	}
	
}
