#include <iostream>
using namespace std;
int findComplement(int n)
{
    int mask = 0;
    int temp = n;

    // create mask like 111... same length as n
    while (temp > 0)
    {
        mask = (mask << 1) | 1;
        temp >>= 1;
    }

    return n ^ mask; // flip bits
}
int main()
{
    int n;
    cin >> n;
    cout << findComplement(n) << endl;

    return 0;
}