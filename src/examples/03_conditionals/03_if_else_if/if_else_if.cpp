//write include statement for if_else header file
#include "if_else_if.h"

using std::string; 


//write code for function named get_generation that accepts an int year and returns
//a string, apply the following logic:
//return "Centenial" when year greater than equal to 1996 to 2014
//return "Millenial" when year greater than equal to 1977 to 1995
//return "Generation X" when year greater than equal to 1965 to 1976
//return "Baby boomer" when year greater than equal to 1946 to 1964
//return "Silent Generation" when year greater than equal 1925 and less than equal 1945
//return "Invalid Year" otherwise
string get_generation(int age)
{
    string result;

    if (age >= 1996 && age <= 2014)
    {
        result = "Centenial";
    }
    
     else if (age >= 1977 && age <= 1995)
    {
        result = "Millenial";
    }
     else if (age >= 1965 && age <= 1976)
    {
        result = "Generation X";
    }
    else if (age >= 1946 && age <=1964)
    {
        result = "Baby Boomer";
    }
     else if (age >= 1925 && age <=1945)
    {
        result = "Silent Generation";
    }
    else 
    {
        result = "Invalid Year";
    }


    return result;
}