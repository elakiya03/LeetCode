/*
 * Program: Word Sorter
 * Description: Reads an integer n, followed by n words. Sorts the words in alphabetical order and prints them.
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (auto i : arr)
    {
        cout << i << endl;
    }
    return 0;
}