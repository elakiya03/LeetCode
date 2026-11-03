/*
 * Program: Collatz Sequence Step Counter (C++)
 * Description: Reads a number and counts the Collatz sequence steps needed to reach 1.
 */

#include <iostream>
using namespace std;

int collatzSequence(long long n)
{
    int count = 0;

    while (n != 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
        count++;
    }
    return count;
}
int main()
{
    long long n;
    cin >> n;
    cout << collatzSequence(n) << endl;

    return 0;
}