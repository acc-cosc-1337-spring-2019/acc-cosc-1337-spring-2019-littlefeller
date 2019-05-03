
#include "rule_of_five.h"

RuleofFive get_object();


int main() 
{
	RuleofFive r(10);
	r = get_object();


	RuleofFive a = get_object();

	RuleofFive b(6);

	return 0;
}

RuleofFive get_object()
{
	RuleofFive r(10);
	return r;
}