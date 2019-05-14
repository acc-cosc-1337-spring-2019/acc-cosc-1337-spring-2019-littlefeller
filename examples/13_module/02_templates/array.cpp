#include"array.h"
#include<string>

template<class T>
T sum(T a, T b)
{
	return a + b;
}

int main()
{
	int sum = sum(5, 4);
	std::string name1 = "JOE";
	std::string name2 = "mary";
	std::string str = sum(name1, name2);

	double d = sum(9.5, 3.4);

	std::cout << num << "\n";
	std::cout << str << "\n";
	std::cout << d << "\n";

	return 0;
}

//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/





