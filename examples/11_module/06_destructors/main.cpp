#include "destructor.h"

Destructor create_class();

int main() 
{
	Destructor d(10);
	Destructor c(5);
	
	// without rule of 3, both classes point to same variable (for statement below)
	Destructor a = d; // create a class copy - copy constructor executes     (a has an int with value 10 also)
	Destructor b(d); // execute copy constructor

	c = d; // executes copy assignment (need copy assignment to do)

	d.set_value(5);

	a.set_ptr_num(100);

	/*

	int x = 5;     x is an Lvalue (we can access it)
	int& y = x;
	int* z = &x;
	int& a = &5; cannot ref because 5 is an Rvalue (temporary object)

	
	return 0;
}

Destructor create_class()
{
	return Destructor (5);
}