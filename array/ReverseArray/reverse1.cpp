/*
 * Program: Array Reverser
 * Description: Reads an integer n, followed by n integers. Reverses the array and prints the reversed array.
 */

#include <iostream>

using namespace std;

int main()
{
    vector<int> l; // or list
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l.push_back(x);
    }
    // reverse list
    reverse(l.begin(), l.end());

    for (int i : l)
    {
        cout << i << " ";
    }
    return 0;
}