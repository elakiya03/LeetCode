/*
 * Approach - Memoization(top down) - recursion + cache (O(n) time)
 * Program: Fibonacci Sequence Printer
 * Description: Reads an integer n and prints the first n Fibonacci numbers.
 */

#include <iostream>
using namespace std;
int fibonacci(vector<int> &mem, int n)
{

    if (n <= 1)
        return n;

    if (mem[n] != -1)
        return mem[n];

    int result = fibonacci(mem, n - 1) + fibonacci(mem, n - 2);
    mem[n] = result;

    return result;
}

int main()
{
    long long x;
    cin >> x;

    vector<int> dp(x + 1, -1);
    for (int i = 0; i < x; i++)
    {
        cout << "Fibo: " << fibonacci(dp, i) << endl;
    }
    return 0;
}
