/*
 * Program: Sum of Digits (C++)
 * Description: Reads a number and computes the sum of its digits.
 */

#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << sumOfDigits(n) << endl;

    return 0;
}