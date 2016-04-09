#include "../inc/test.hh"

using namespace std;

void Test::generate_numbers(int how_many, int field)
{
	srand (time(NULL));
	data.open("data.txt", std::ios::out);
	if(data.good() == true)
	{
		for(int i=0; i<how_many; i++)
		{
			data << (rand()%1000) <<' ';
		}
	}
	else cout << "Blad dostepu do pliku!" << endl;
	data.close();
}

void Test::test_list(List *test_pointer, int laps, int how_many_numbers)
{
	cout << how_many_numbers << endl;
	double sum_time = 0;
	int file_data=0;
	fstream data;
	Timer s;

	for(int j=0; j<laps; j++)
	{
		file_data=0;
		data.open("data.txt",std::ios::in);
		if( data.good() == true )
		{
			//s.start();
			for(int i=0; i<how_many_numbers; i++)
			{
				data >> file_data;
				(*test_pointer).push_back(file_data);
			}
			//s.stop();
		} else cout << "Blad dostepu do pliku!" << endl;
				
		data.close();
		sum_time += s.getElapsedTimeMs();
		
		while(!(*test_pointer).empty())
		{
			s.start();
			//cout << (*test_pointer).front_element()<<endl;
			(*test_pointer).front_element() == item;
			(*test_pointer).pop_front();
			s.stop();
	}
	}
	double average;
	average = sum_time/laps;
	
	scores.open("scores.txt",std::ios::out | std::ios::app);
	if( scores.good() == true )
	{
		scores << how_many_numbers <<' '<<average<<endl;
	} else cout << "Blad dostepu do pliku!" << endl;
	
	scores.close();
}

