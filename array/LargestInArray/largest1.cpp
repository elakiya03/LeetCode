#include <iostream>
using namespace std;

int largestInArray(vector<int> &num)
{
    int largest = num.at(0);

    for (int i : num)
    {
        largest = max(largest, i); // standard library MAX function
    }
    return largest;
}

int main()
{
    vector<int> v;
    int n;
    cout << "Enter no of elements: ";
    cin >> n;

    cout << "Enter " << n << " values" << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Largest: " << largestInArray(v) << endl;

    return 0;
}