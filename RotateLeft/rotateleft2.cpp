/*
 * Program: Rotate Array Left
 * Description: Reads an integer n, an array of n elements, and a rotation value k. Rotates the array left by k positions and prints the result.
 */

#include <iostream>
using namespace std;

vector<int> rotateLeftByK(vector<int> &v, int k)
{
    int n = v.size();
    k = k % n;

    vector<int> temp;
    int idx = 0;

    // from k to n-1 elements
    for (int i = k; i < n; i++)
        temp.push_back(v[i]);

    // from 0 to k elements
    for (int i = 0; i < k; i++)
        temp.push_back(v[i]);

    return temp;
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

    int k;
    cin >> k;

    v = rotateLeftByK(v, k);

    for (auto i : v)
        cout << i << " ";

    return 0;
}

// time - O(n)
// space - O(n)