/*
 * Program: Prime Checker (C++)
 * Description: Reads a number and checks whether it is prime.
 */

#include <iostream>
using namespace std;

void checkPrime(int n)
{

    if (n <= 1)
        cout << "Not prime" << endl;
    else if (n == 2)
        cout << "Prime" << endl;
    else
    {
        for (int i = 3; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                cout << "Not prime" << endl;
                return;
            }
        }
        cout << "Prime" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    checkPrime(n);
    return 0;
}