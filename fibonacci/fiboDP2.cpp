/*
 * Approach - Tabulation(bottom up) (O(n) time)
 * Program: Fibonacci Sequence Printer
 * Description: Reads an integer n and prints the first n Fibonacci numbers.
 */

#include <iostream>
using namespace std;
int fibonacci(int n)
{
    int dp[n];
    dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main()
{
    long long x;
    cin >> x;

    for (int i = 1; i <=x; i++)
    {
        cout << fibonacci(i)<<" ";
    }
    return 0;
}
