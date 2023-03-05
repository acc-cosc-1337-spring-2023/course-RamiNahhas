//write include statements
#include<iostream>
#include "if_else_if.h"
//write cin and cout using statements
using std::cout;
using std::cin;

/*
Write code to capture year from keyboard.
Pass the year to get_generation function and display function result.
*/
int main() 
{
	auto birth_year = 0;
	cout<< "Enter age";
	cin>>birth_year;
	
	auto result = get_generation(birth_year);

	cout<<"Generation is: "<<result<<"\n";

	return 0;
}