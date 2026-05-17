/*
 * Program: Array Sorter
 * Description: Reads an integer n, followed by n integers. Sorts the array in ascending order and prints the sorted array.
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sort
    sort(arr, arr + n);

    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}