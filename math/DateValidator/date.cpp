/*
 * Program: Date Validator
 * Description: Reads day, month, and year values and validates if the date is valid. Prints "Yes" if valid, "No" otherwise.
 */

#include <iostream>
using namespace std;

string isDateValid(int day, int month, int year)
{
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // if year is leap year
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        months[1] = 29;

    if (month > 12 || month < 1 || day < 1 || day > months[month - 1])
        return "Invalid";

    return "Valid";
}

int main()
{
    int day, month, year;
    cin >> day >> month >> year;
    cout << isDateValid(day, month, year) << endl;
    return 0;
}