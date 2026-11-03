/*
 * Program: Reverse Number (C++)
 * Description: Reads a number and outputs its digits in reverse order.
 */

#include <iostream>
using namespace std;

int reverseNumber(int num)
{
    long rev = 0;

    while (num != 0)
    {
        int digit = num % 10;

        // check overflow BEFORE updating
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
            return 0;

        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
            return 0;

        rev = rev * 10 + digit;
        num /= 10;
    }

    return rev;
}
int main()
{
    int n;
    cin >> n;
    cout << reverseNumber(n) << endl;
    return 0;
}