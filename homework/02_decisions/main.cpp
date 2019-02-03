#include<iostream>
//write include statements
#include "decisions.h"
#include <string>
using std::cout;
using std::cin;
/*
In main write code to capture a letter_grade and credit_hours from the keyboard:

Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA should calculate to 3.0, make sure to display it before program exits.

Display:
GPA 3.0

*/
int main() 
{
	std::string letter_grade;
	double credit_hours;

	double grade_points;

	double credit_hours_total = 0;
	double credit_points_total = 0;

	// 1st round
	cout << "Enter letter grade: ";
	cin >> letter_grade;
	grade_points = get_grade_points(letter_grade);

	cout << "Enter credit hours: ";
	cin >> credit_hours;

	credit_hours_total += credit_hours;
	credit_points_total += credit_hours * grade_points;

	// 2nd round
	cout << "Enter letter grade: ";
	cin >> letter_grade;
	grade_points = get_grade_points(letter_grade);

	cout << "Enter credit hours: ";
	cin >> credit_hours;

	credit_hours_total += credit_hours;
	credit_points_total += credit_hours * grade_points;

	// 3rd round
	cout << "Enter letter grade: ";
	cin >> letter_grade;
	grade_points = get_grade_points(letter_grade);

	cout << "Enter credit hours: ";
	cin >> credit_hours;

	credit_hours_total += credit_hours;
	credit_points_total += credit_hours * grade_points;

	double gpa = calculate_gpa(credit_hours_total, credit_points_total);

	cout << "GPA: " << gpa;

	return 0;
}
