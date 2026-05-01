/*
 * Program: Fibonacci Calculator
 * Description: Reads an integer n and computes the nth Fibonacci number using recursion. Prints the result.
 */

#include <iostream>
using namespace std;

long long fibonacci(long long n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    long long x;
    cin >> x;
    cout << "Fibo: " << fibonacci(x) << endl;
    return 0;
}

// time = O(2^n) - very slow