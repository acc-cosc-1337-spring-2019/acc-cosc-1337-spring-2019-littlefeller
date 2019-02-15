#include "sequence.h"
#include <iostream>
using std::cin;
using std::cout;
#include<vector>
#include<string>

using std::string;
using std::vector;
/*
Write code for void function display_vector that accepts parameter const reference vector of strings.
The function will iterate through the vector and display a string per line.
*/
void display_vector(const vector<string>& names)
{
	for (auto c : names)
	{
		cout << c << "\n";
	}
}


/*
Write code for void function update_vector_element that accepts parameter reference vector of strings,
a string vector search_value, and a string replace_value.
The function will iterate through the vector and search for the search_value and if found will
replace the vector element with the replace_value.
*/
void update_vector_element(vector<string>& names, string search_value, string replace_value)
{
	for (auto& c : names)
	{
		if (c == search_value)
		{
			c = replace_value;
		}
	}
}
