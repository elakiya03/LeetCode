#include <iostream>
#include <vector>

using namespace std;

void runningSum(vector<int> &num)
{
    int sum = 0;

    for (int i : num)
    {
        sum += i;
        cout << sum << " ";
    }
}

int main()
{
    vector<int> v;
    int n;
    cout << "Enter no of elements: ";
    cin >> n;

    cout << "Enter " << n << " values:" << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Running sum: ";
    runningSum(v);
    cout << endl;
    return 0;
}