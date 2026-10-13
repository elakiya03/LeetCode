#include <iostream>
using namespace std;

void doubleAll(vector<int> &num)
{
    for (int i = 0; i < num.size(); i++)
    {
        num.at(i) = num.at(i) * 2;
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
    doubleAll(v);
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}
