/*
 * Program: Remove Duplicate Numbers
 * Description: Reads an integer n, followed by n integers. Removes duplicate numbers and prints each unique number only once.
 */

#include <iostream>
#include <unordered_set>

using namespace std;

void removeDuplicateNumber(vector<int> &v)
{

    unordered_set<int> seen;

    for (int i : v)
        if (seen.find(i) == seen.end())
        {
            cout << i << " ";
            seen.insert(i);
        }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    removeDuplicateNumber(v);
    return 0;
}