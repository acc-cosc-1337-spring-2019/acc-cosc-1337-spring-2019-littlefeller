#include <iostream>


int main()
{

	char* name = new char[10]; // allocate
	std::cout << "Enter name: ";
	std::cin.getline(name, 10);// \0 (null terminator - lets compiler know that thats the end of the character array
	std::cout << name;

	delete[] name;// deallocates array from memory
	name = nullptr;

	char* name1 = new char[10]; // allocate
	name1[0] = 'a';
	//...
	name1[9] = '\0';

	delete[] name1;
	name1 = nullptr;



	return 0;
}