/*
 * Program: Digit Counter (C++)
 * Description: Reads a number and counts how many digits it contains.
 */

#include <iostream>
using namespace std;

int countDigits(int n)
{
    int count = 0;

    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
int main()
{
    int num;
    cin >> num;
    cout << countDigits(num) << endl;

    return 0;
}