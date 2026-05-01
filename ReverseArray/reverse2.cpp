/*
 * Program: Array Reverser
 * Description: Reads an integer n, followed by n integers. Reverses the array and prints the reversed array.
 */

#include <iostream>

using namespace std;

int main()
{
    vector<int> l;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l.push_back(x);
    }

    // reverse iterator
    for (auto it = l.rbegin(); it != l.rend(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}