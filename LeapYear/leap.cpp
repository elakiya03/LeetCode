/*
 * Program: Leap Year Checker (C++)
 * Description: Reads a year and prints whether it is a leap year or not.
 */

/*
A year is a leap year if:

It is divisible by 4 and
It is NOT divisible by 100, unless it is also divisible by 400
*/
#include <iostream>

int main()
{
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        std::cout << "Leap year" << std::endl;
    else
        std::cout << "Not a leap year" << std::endl;
    return 0;
}
