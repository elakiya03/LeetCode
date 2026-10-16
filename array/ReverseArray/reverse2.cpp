#include <iostream>

using namespace std;

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

    // reverse iterator - print
    for (auto it = v.rbegin(); it != v.rend(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}