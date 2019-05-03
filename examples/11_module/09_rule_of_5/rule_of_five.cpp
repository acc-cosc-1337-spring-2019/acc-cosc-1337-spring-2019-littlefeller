#include "rule_of_five.h"

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


// param r is a temporary object (rvalue)
RuleofFive::RuleofFive(RuleofFive && r)
{
	ptr_num = r.ptr_num;
	r.ptr_num = nullptr;
}

RuleofFive & RuleofFive::operator=(RuleofFive && r)
{
	std::swap(ptr_num, r.ptr_num);
	return *this; // this means the object in memory
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