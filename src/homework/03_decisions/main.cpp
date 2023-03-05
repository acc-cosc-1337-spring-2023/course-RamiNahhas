//write include statements
#include "decisions.h"
#include <iostream>
using std::cout; using std::cin; using std::string;

int main() 
{
	auto grade = 0;
	string result;
 	int answer;

	cout << "MAIN MENU" << "\n\n";
    cout << "1- Letter grade using if" <<"\n";
	cout << "2- Letter grade using switch" << "\n";
	cout << "3- Exit" << "\n\n";
	cout << "Choose option: ";

	cin >> answer;

if (answer == 1)
{
	cout << "Enter grade: ";
	cin >> grade;
	 result = get_letter_grade_using_if(grade);
	cout << "Your letter grade is: " << result << "\n";

}


else if (answer == 2)
{
	cout << "Enter grade: ";
	cin >> grade;
	 result = get_letter_grade_using_switch(grade);
	cout << "Your letter grade is: " << result << "\n";

}


else if (answer == 3)
{
	cout << "\n";
	

}
else
{ 
	cout << "Number is out of range";
}

}