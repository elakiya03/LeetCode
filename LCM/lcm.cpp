/*
 * Program: LCM Calculator
 * Description: Reads two integers and computes their Least Common Multiple using GCD. Prints the LCM.
 */

#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }

    return x;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << "LCM: " << x * y / gcd(x, y) << endl;
}