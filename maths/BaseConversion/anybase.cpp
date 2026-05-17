/*
 * Program: Base Conversion to Decimal
 * Description: Reads a number and its source base and target base, converts num to target base and prints the result.
 */

#include <iostream>
using namespace std;

int toDecimal(string num, int src)
{
    int dec = 0;
    for (int i = 0; i < num.size(); i++)
    {
        int digit = num[i] - '0';
        dec = dec * src + digit;
    }
    return dec;
}

string baseConversion(int n, int base)
{
    //int n = toDecimal(num, src);

    if (n == 0)
        return "0";

    string result = "";
    while (n > 0)
    {
        result += (char)('0' + n % base);
        n /= base;
    }

    reverse(result.begin(), result.end());
    return result;
}
int main()
{
    int num;
    cin >> num;

    int src, tgt;
    cin >> src >> tgt;

    cout << baseConversion(num, tgt) << endl;

    return 0;
}