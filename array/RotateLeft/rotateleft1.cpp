#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(vector<int> &v, int left, int right)
{
    while (left < right)
    {
        swap(v[left++], v[right--]);
    }
}

void rotateLeftByK(vector<int> &v, int k)
{
    int n = v.size();

    if (n == 0)
        return;
    k = k % n;

    reverse(v, 0, k - 1);
    reverse(v, k, n - 1);
    reverse(v, 0, n - 1);
}

int main()
{
    int n;
    cout << "Enter no of elements: ";
    cin >> n;

    if (n <= 0)
        return 0;

    vector<int> v(n);
    cout << "Enter " << n << " elements:\n";

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int k;
    cout << "Enter k: ";
    cin >> k;

    rotateLeftByK(v, k);

    for (auto i : v)
        cout << i << " ";

    return 0;
}

// time - O(n)
// space - O(1)