/*
 * Program: Recursive Sum (C++)
 * Description: Reads a number and computes the sum from 1 to n using recursion.
 */

#include <iostream>
using namespace std;

int recursiveSum(int n)
{
    if (n == 1)
        return 1;
    return n + recursiveSum(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << recursiveSum(n) << endl;

    return 0;
}