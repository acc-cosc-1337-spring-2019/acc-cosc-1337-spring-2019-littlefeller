//
#include <iostream>
class RuleofFive
{
public:
	RuleofFive(int n) : num(n) { ptr_num = new int(n); }
	RuleofFive(const RuleofFive& d); // copy constructor - RULE OF 3
	RuleofFive& operator=(RuleofFive& d); //copy assignment - RULE OF 3 (if any of the 3 exist, you need the other 2)
	RuleofFive(RuleofFive&& r); // move constructor rule of 5 c++ 11
	RuleofFive& operator=(RuleofFive&& r); // copy assignment - rule of 5 c++ 11
	~RuleofFive(); // RULE OF 3
	void set_value(int n);
	int get_value();

	void set_ptr_num(int n);
	int* get_ptr_num();
private:
	int num;
	int* ptr_num;
};