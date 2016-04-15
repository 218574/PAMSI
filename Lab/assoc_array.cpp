#include "../inc/assoc_array.hh"
#include "../inc/list.hh"

Assoc_array::Assoc_array()
{
	front_pointer = NULL;
}

Assoc_array::insert(string *key, int value)
{
	string *key = new string[strlen (key) + 1];
        int zn;
        int i = 0;
        
        while(*(key+i))
        {
                zn = *(key+i);
                zn = (key)tolower(zn);
                *(key+i) = zn;
                i++;
        }
        *(key+i) = '\0';

        supp *nowy = new supp (key);
        nowy->next = head;
        head = nowy;
        head->val = value;

        
        delete [] key;

}

Assoc_array::find(string *key)
{
	node *wsk = head;
	if(!wsk)
	{
		insert(key, 0);
		wsk = head;
	}
	return wsk->val;
}