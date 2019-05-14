//
#include<iostream>
using std::cout;

//int sum(int a, int b);

template<class T>
T sum(T a, T b);

template <typename T> 
class Array
{
public:
	Array(int size);
	//copy constructor
	Array(const Array &aray)
	//copy assignment
	Array<T> operator=(const Array& right);
	Array(Array&& aray);
	//move assignment
	Array<T> operator=(Array&& right);
	~Array();
	void process();

private:
	int size;
	T* numbers;
};

