//
//
#include "report.h"
#include<iostream>
Report::Report()
{
	// read from file or database
	for (int = 0; i < 5; ++i)
	{
		accounts[i] = new BankAccount(i * 100);


	}


}

void Report::display()
{
	for (int i = 0; i < 5; ++i)
	{
		std::cout << accounts[i]->get_balance() << "\n";

	}
}

Report::~Report()
{
	for (int = 0; i < 5; ++i) {
		std::cout << "clear element \n";
		delete accounts[i];
		accounts[i] = nullptr;
	}
}
