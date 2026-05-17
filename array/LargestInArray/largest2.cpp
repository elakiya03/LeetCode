/*
 * Program: Largest in Array
 * Description: Reads an integer n, followed by n integers. Finds and prints the largest number in the array.
 */

#include <iostream>

using namespace std;

int largestInArray(vector<int> &num)
{
    return *max_element(num.begin(), num.end());
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Largest: " << largestInArray(v) << endl;

    return 0;
}