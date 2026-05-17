/*
 * Approach - Bottom Up  space optimized - O(n) time and O(1) space
 * Program: Fibonacci Sequence Printer
 * Description: Reads an integer n and prints the first n Fibonacci numbers.
 */

#include <iostream>
using namespace std;

int main()
{
    int t1 = 0;
    int t2 = 1;

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << t1 << " ";
            continue;
        }
        if (i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        auto curr = t1 + t2;
        t1 = t2;
        t2 = curr;

        cout << curr << " ";
    }
    return 0;
}
