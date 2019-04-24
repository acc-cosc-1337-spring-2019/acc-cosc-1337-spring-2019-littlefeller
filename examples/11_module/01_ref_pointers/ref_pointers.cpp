#include "ref_pointers.h"

//

void ref(int & number, int* numberPtr)
{
	// both of these modify the original number value, the point is, you can manipulate values with a pointer
	number = 100;
	*numberPtr = 1000;
}
