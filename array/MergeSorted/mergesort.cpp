#include <iostream>
using namespace std;

void mergeTwoSortedArray(vector<int> &v1, vector<int> &v2)
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
    cout << "Enter n1: ";
    cin >> c1;

    vector<int> v1;
    cout << "Enter " << c1 << " values";
    for (int i = 0; i < c1; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    int c2;
    cout << "Enter n2: ";
    cin >> c2;
    vector<int> v2;
    cout << "Enter " << c2 << " values";
    for (int i = 0; i < c2; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }

    mergeTwoSortedArray(v1, v2);
    return 0;
}