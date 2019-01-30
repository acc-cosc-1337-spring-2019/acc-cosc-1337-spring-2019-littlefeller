#include "assign02.h"
#include<iostream>

using std::cout;
using std::cin;
//Write the include statement for assign02 here
//Write include for capturing input from keyboard and displaying output to screen

int main() 
{	
	double hours;
	double hourly_rate;
	//create a double variable named hours
	//create a double variable named hourly_rate

	cout << "hours:";
	cin >> hours;
	cout << "hourly_rate:";
	cin >> hourly_rate;
	//Prompt user for keyboard input for hours and hourly_rate
	//save the input to variables hours and hourly_rate

	double gross_salary;
		//Create a double variable named gross_salary

	gross_salary = gross_pay(hours, hourly_rate);
	//Call the gross_pay function and save its return value to the gross_salary variable

	cout << "Gross pay: " << gross_salary;
	//Display the gross_salary variable as follows:
	//Example ---->>>     Gross pay: 150.00   


	return 0;
}

