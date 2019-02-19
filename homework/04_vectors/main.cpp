#include "vectors.h"

#include <iostream>
using std::cin;
using std::cout;
#include<vector>
using std::vector;
#include <string>

/*
Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{

	int choice;
	int biggest;
	int integer_value;

	vector<int> primes;

	vector<int> param_numbers = {34, 700, 78, 2};

	std::string another;

	do {
		cout << "Enter 1 to get max from vector, enter 2 to get primes ";
		cin >> choice;

		cout << "Enter a number: ";
		cin >> integer_value;

		param_numbers.push_back(integer_value);


		if (choice == 1)
		{
			biggest = get_max_from_vector(param_numbers);
			cout << biggest << "\n";
		}
		if (choice == 2)
		{
			primes = vector_of_primes(integer_value);

			for (int i = 0; i < primes.size(); i++)
			{
				cout << primes[i] << " ";
			}
		}
		cout << "Continue? (enter lowercase y to continue) ";
		cin >> another;
	}
	while (another == "y");
	
	return 0;
}