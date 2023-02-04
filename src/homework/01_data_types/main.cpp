//write include statements
#include <iostream>
#include "data_types.h"
#include "string"
//write namespace using statement for cout
using std::cin; using std::cout; using std::string;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/

int main()
{
	int num;
	cin >> num;

	int result = multiply_numbers(num);

	cout << result<< "\n";


	int num1 = 4;

	multiply_numbers(num1);

	cout << result<< "\n";


	return 0;
}
