#include "destructor.h"



int main() 
{
	Destructor d(10);

	Destructor a = d; // create a class copy (a has an int with value 10 also)
	d.set_value(5);

	a.set_ptr_num(100);


	return 0;
}