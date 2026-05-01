/*
 * Program: Running Sum Calculator
 * Description: Reads an integer n, followed by n integers. Computes the running sum and prints each cumulative sum.
 */

#include <iostream>

using namespace std;

void runningSum(vector<int> &num)
{
    int sum = 0;

    for (int i : num)
    {
        sum += i;
        cout << sum << " ";
    }
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
    runningSum(v);
    return 0;
}