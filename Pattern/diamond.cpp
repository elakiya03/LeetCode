/*
 * Program: Diamond Pattern Printer
 * Description: Reads an odd integer n and prints a diamond pattern of asterisks with height n.
 */

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter only odd number: ";
    cin >> N;

    // upper half
    for (int i = 1; i <= N; i += 2)
    {
        int spaces = (N - i) / 2;

        for (int j = 0; j < spaces; j++)
            cout << " ";

        for (int j = 0; j < i; j++)
            cout << "*";

        cout << endl;
    }

    // lower half
    for (int i = N - 2; i >= 1; i -= 2)
    {
        int spaces = (N - i) / 2;

        for (int j = 0; j < spaces; j++)
            cout << " ";

        for (int j = 0; j < i; j++)
            cout << "*";

        cout << endl;
    }
    return 0;
}

/*
Upper Half

Lower Half

*/