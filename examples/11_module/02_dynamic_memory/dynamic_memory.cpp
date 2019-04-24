#include "dynamic_memory.h"
#include<iostream>
//

void allocate_use_release()
{
	int stack_num{ 5 }; //stack variable, this is just another way to initialize it

	// how to allocate dynamic memory
	int* num = new int(5);// heap, data variable... ALLOCATE

	std::cout << *num; // USE

	delete num; // RELEASE
	num = nullptr;
}
