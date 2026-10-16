#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int> &v)
{
    int left = 0, right = v.size() - 1;

    while (left < right)
        swap(v[left++], v[right--]);

    cout << "Two Pointer" << endl;
    for (int i : v)
        cout << i << " ";
    cout << endl;
}

void reverseArrayUsingSinglePointer(vector<int> &v)
{
    for (int i = 0; i < v.size() / 2; i++)
        swap(v[i], v[v.size() - i - 1]);
    
    cout << "Single Pointer" << endl;
    for (int i : v)
        cout << i << " ";
    cout << endl;
}

int main()
{
    vector<int> v;
    int n;

    cout << "Enter no of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements" << endl;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // 1. Built-in reverse
    vector<int> v1 = v;
    reverse(v1.begin(), v1.end());

    cout << "Reverse - Inbuilt" << endl;
    for (int i : v1)
        cout << i << " ";
    cout << endl;

    // 2. Two pointers
    vector<int> v2 = v;
    reverseArray(v2);

    // 3. Single pointer
    vector<int> v3 = v;
    reverseArrayUsingSinglePointer(v3);

    return 0;
}