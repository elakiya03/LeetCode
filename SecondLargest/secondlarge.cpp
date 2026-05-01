/*
 * Program: Second Largest Finder
 * Description: Reads an integer n, followed by n integers. Finds and prints the second largest number in the array.
 */

#include <iostream>

using namespace std;
int secondLargest(int arr[], int n)
{
    int max = arr[0];
    int sec = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            sec = max;
            max = arr[i];
        }
        else if (arr[i] != max && arr[i] > sec)
        {
            sec = arr[i];
        }
    }
    return sec;
}
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Second Largest: " << secondLargest(arr, n) << endl;

    return 0;
}