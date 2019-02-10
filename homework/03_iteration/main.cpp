
#include "dna.h"
#include <string>
#include<iostream>

using std::cin;
using std::cout;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	std::string repeat;
	do
	{
		int choice = 0;
		std::string dna;

		cout << "Enter 1 to get gc content, enter 2 to get DNA complement: ";
		cin >> choice;
		
		cout << "Enter your DNA sequence in all caps: ";
		cin >> dna;

		if (choice == 1)
		{
			double result = get_gc(dna);
			cout << "Result: " << result << "\n";
		}
		else if (choice == 2)
		{
			std::string result = get_dna_complement(dna);
			cout << "Result: " << result << "\n";
		}

		cout << "Continue program? (Enter Y to continue): ";
		cin >> repeat;

	} while (repeat == "Y");

	return 0;
}