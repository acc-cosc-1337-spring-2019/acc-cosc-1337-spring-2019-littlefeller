#include "memory_leak.h"



int main() 
{
	memory_leak(); // we leak memory

	while (true)
	{
		memory_leak(); // leak lots of memory
	}
	return 0;
}