/*
 * Program: Digit Frequency Counter
 * Description: Reads an unsigned long integer and counts the frequency of each digit (0-9). Prints each digit that appears along with its count.
 */

#include <iostream>
using namespace std;

int main()
{
    unsigned long int n;
    cin >> n;

    int arr[10] = {0};

    while (n > 0)
    {
        int rem = n % 10;
        arr[rem]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
            cout << i << ":" << arr[i] << endl;
    }

    return 0;
}