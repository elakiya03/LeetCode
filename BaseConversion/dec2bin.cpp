/*
 * Program: Decimal to Binary Converter
 * Description: Reads a decimal number and converts it to binary. Prints the binary representation.
 */

#include <iostream>
using namespace std;

string toBinary(int n)
{
    string binary = "";
    while (n > 0)
    {
        binary += (char)('0' + n % 2);
        n /= 2;
    }

    reverse(binary.begin(), binary.end());
    return binary;
}

int main()
{
    int n;
    cin >> n;
    cout << toBinary(n) << endl;
    return 0;
}