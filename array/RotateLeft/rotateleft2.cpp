#include <iostream>
using namespace std;

vector<int> rotateLeftByK(vector<int> v, int k)
{
    int n = v.size();
    k = k % n;

    vector<int> temp;

    // from k to n - 1 elements
    for (int i = k; i < n; i++)
        temp.push_back(v[i]);

    // from 0 to k - 1  elements
    for (int i = 0; i < k; i++)
        temp.push_back(v[i]);

    return temp;
}
int main()
{
    int n;
    cout << "Enter no of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter " << n << " elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    v = rotateLeftByK(v, k);

    for (auto i : v)
        cout << i << " ";

    return 0;
}

// time - O(n)
// space - O(n)