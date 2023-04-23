//write include statements
#include "hwexpressions.h"
#include <iostream>
//write namespace using statement for cout
using std::cout; using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	cout << "Meal amount: ";
	cin >> meal_amount;

 tax_amount = get_sales_tax_amount(meal_amount);

cout << "Sales Tax: " << tax_amount << "\n";

cout << "Enter tip rate: ";
cin >> tip_rate;


 tip_amount = get_tip_amount(meal_amount,  tip_rate);

cout << "Tip amount: " << tip_amount << "\n";


total = meal_amount + tip_amount + tax_amount;

cout <<"Total: " << total;

cout << "\n"<< "\n"<< "\n"<< "\n"<< "\n"<< "\n";

cout << "RECEIPT: " << "\n" << "Meal amount: " << meal_amount << "\n" << "Sales tax: " << tax_amount << "\n" 
<< "Tip amount: " << tip_amount << "\n" << "Total: " << total << "\n";


	return 0;
}
