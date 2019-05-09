//
#include "report.h"
#include<iostream>
Report::Report()
{
	// read from file or database
	accounts = new BankAccounts[5];
	//iterate to update balance
	account[0].get_balance();


}

void Report::display()
{
	for (int i = 0; i < 5; ++i)
	{
		std::cout << accounts[i].get_balance() << "\n";

	}
}

Report::~Report()
{
	std::cout << "clear array \n";
	delete[] accounts;
	accounts = nullptr;

}
