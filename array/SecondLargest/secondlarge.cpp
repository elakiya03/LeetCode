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
    cout << "Enter no of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Second Largest: " << secondLargest(arr, n) << endl;

    return 0;
}