#include <iostream>

int main() 
{

	const int SIZE = 5;

	int hours[SIZE] = { 5, 10, 30, 20, 7 };

	int* first_element = hours;

	std::cout << *first_element << "\n"; // displays 5
	std::cout << *(first_element + 1) << "\n"; // displays 10 (points to the second)
	std::cout << *first_element << "\n"; // displays 5

	*first_element++;
	std::cout << *first_element << "\n\n"; // displays 10

	//foward iteration
	
	int* hours_ptr = hours;
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << hours_ptr << "\n";
		hours_ptr++;
	}

	std::cout << "\n\n";
	// reverse iteration
	for (int i = 0; i < SIZE; ++i)
	{
		hours_ptr--;
		std::cout << *hours_ptr << "\n";
	}


	return 0;
}