#include "../inc/list.hh"
#include "../inc/test.hh"

using namespace std;

int main()
{
	int size_1 = 10;
	int size_2 = 100000000; 
	Test o;
	o.generate_numbers(size_2,30);
	List list_array(1);
	for(size_1=10; size_1<=size_2; size_1*=10)
	{
		o.test_list(&list_array, 100, size_1);
	}

	return 0;
}