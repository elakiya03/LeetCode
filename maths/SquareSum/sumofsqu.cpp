/*
 * Program: Sum of Squares Calculator
 * Description: Reads an integer n and computes the sum of squares of numbers from 1 to n. Prints the result.
 */

#include <iostream>
using namespace std;

int sumOfSquare(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << sumOfSquare(n) << endl;
    return 0;
}