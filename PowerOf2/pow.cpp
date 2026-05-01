/*
 * Program: Power of 2 Checker
 * Description: Reads an integer n and checks if it is a power of 2. Prints "Yes" if it is, "No" otherwise.
 */

#include <iostream>
using namespace std;

string isPowerOfTwo(int n)
{

    while (n > 1 && n % 2 == 0)
    {
        n /= 2;
    }

    return n == 1 ? "Yes" : "No";
}

int main()
{
    int n;
    cin >> n;
    cout << isPowerOfTwo(n) << endl;
}