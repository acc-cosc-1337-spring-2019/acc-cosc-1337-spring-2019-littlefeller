#include "sequence.h"
#include<vector>
#include<string>
#include <iostream>
using std::cin;
using std::cout;
using std::string;
using std::vector;

/*
Write code to create a vector of string names, add the values "John", "Mary", "Patty",
"Sam" to the vector, call the function display_vector and pass the names vector as
an argument, prompt user for a name to search for and a value to replace searched value with.
Afterward, call the update_vector_element with the names vector and call the display_vector
function.
Don't worry about displaying a message for values that aren't found.  Assume user will
give you a valid name.
*/

int main()
{
	string search_value;
	string replace_value;
	vector<string> names{ "John", "Mary", "Patty", "Sam"};
	display_vector(names);
	cout << "Please enter a name to search for" << "\n";
	cin >> search_value;
	cout << "Please enter a replacement value" << "\n";
	cin >> replace_value;
	update_vector_element(names, search_value, replace_value);
	display_vector(names);



	return 0;
}

