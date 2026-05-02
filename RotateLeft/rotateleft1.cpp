/*
 * Program: Rotate Array Left
 * Description: Reads an integer n, an array of n elements, and a rotation value k. Rotates the array left by k positions and prints the result.
 */

#include <iostream>
using namespace std;

void reverse(vector<int> &v, int start, int end)
{
    while (start < end)
    {
        int temp = v.at(start);
        v.at(start) = v.at(end);
        v.at(end) = temp;

        start++;
        end--;
    }
}

vector<int> rotateLeftByK(vector<int> &v, int k)
{
    int n = v.size();
    k = k % n;

    reverse(v, 0, k - 1);
    reverse(v, k, n - 1);
    reverse(v, 0, n - 1);

    return v;
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

    rotateLeftByK(v, k);

    for (auto i : v)
        cout << i << " ";

    return 0;
}

// time - O(n)
// space - O(1)