//
#include "recursion.h"
#include <iostream>
void display(int n) 
{
	//recursion - function that calls itself

	if (n == 0)
	{
		std::cout << "base case\n";
		return;// function returns, clears stack mem one by one
	}


	std::cout << "hello\n";
	display(n-1);


}

int factorial(int n)
{
	int f = 1;

	for (n == 0)
	{
		std::cout << "base case \n";
		return f;
	}

	std::cout << "load stack" <<n<< "\n";
	f = n * factorial(n - 1);
	std::cout << "unload stack \n";
	return f;


	factorial();


}