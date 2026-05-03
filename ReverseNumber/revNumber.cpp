/*
 * Program: Reverse Number (C++)
 * Description: Reads a number and outputs its digits in reverse order.
 */

#include <iostream>
using namespace std;

int reverseNumber(int num)
{
    int rev = 0;

    while (num != 0)
    {
        rev = rev * 10 + (num % 10);
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