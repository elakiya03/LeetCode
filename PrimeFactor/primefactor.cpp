/*
 * Program: Prime Factorization
 * Description: Reads an integer n and prints its prime factors.
 */

#include <iostream>
using namespace std;
void primeFactor(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    }
    // if remainder is a prime
    if (n > 1)
    {
        cout << n << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    primeFactor(n);
    return 0;
}

// O(⎷n)