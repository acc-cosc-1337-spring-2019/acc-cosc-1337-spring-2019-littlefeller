#include "destructor.h"

//

Destructor::~Destructor()
{
	
	delete ptr_num;
	ptr_num = nullptr;
	
}

Destructor::Destructor(const Destructor & d)
{
	ptr_num = new int(*d.ptr_num);
}

Destructor& Destructor::operator=(Destructor& d)
{
	delete ptr_num;
	ptr_num = new int(*d.ptr_num); 

	return *this; //refers to where it is in the mem at the moment?

	// now we have 2 pointers pointing to 2 different mem locations on heap
}

void Destructor::set_value(int n)
{
	num = n;
}

int Destructor::get_value()
{
	return num;
}

void Destructor::set_ptr_num(int n)
{
	*ptr_num = n;
}

int * Destructor::get_ptr_num()
{
	return ptr_num;
}
