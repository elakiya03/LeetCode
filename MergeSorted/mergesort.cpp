/*
 * Program: Merge Two Sorted Arrays
 * Description: Reads two sorted arrays and merges them into a single sorted array. Prints the merged result.
 */

#include <iostream>
using namespace std;

void mergeTwoSortedList(vector<int> &v1, vector<int> &v2)
{
    int n1 = v1.size();
    int n2 = v2.size();

    vector<int> temp;

    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        if (v1[i] <= v2[j])
            temp.push_back(v1[i++]);
        else
            temp.push_back(v2[j++]);
    }

    // remaining elements of v1
    while (i < n1)
        temp.push_back(v1[i++]);

    // remaining elements of v1
    while (j < n2)
        temp.push_back(v2[j++]);

    for (auto i : temp)
        cout << i << " ";
}

int main()
{
    int c1;
    cin >> c1;
    vector<int> v1;
    for (int i = 0; i < c1; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    int c2;
    cin >> c2;
    vector<int> v2;
    for (int i = 0; i < c2; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }

    mergeTwoSortedList(v1, v2);
    return 0;
}