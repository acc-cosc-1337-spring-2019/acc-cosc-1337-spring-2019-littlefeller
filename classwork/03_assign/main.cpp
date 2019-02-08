#include "loops.h"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	std::string more;
	do {
		int num;
		cout << "enter number: ";
		cin >> num;
		int answer = fac_func(num);
		cout << "\n" << answer << "\n";

		
		cout << "another number? y or n";
		cin >> more;

	} while (more == "y");


	return 0;
}