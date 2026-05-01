/*
 * Program: GCD Calculator (Subtraction Method)
 * Description: Reads two integers and computes their Greatest Common Divisor using repeated subtraction. Prints the GCD.
 */

#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    while (x != y)
    {
        if (x > y)
            x = x - y;
        else if (y > x)
            y = y - x;
    }
    return x;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << "GCD: " << gcd(x, y) << endl;
    return 0;
}