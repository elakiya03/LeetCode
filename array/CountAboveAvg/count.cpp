#include <iostream>
#include <numeric>
using namespace std;

int countingAboveAverage(vector<int> &num)
{
    int count = 0;

    double avg = accumulate(num.begin(), num.end(), 0.0) / num.size();
    cout << "Average: " << avg << endl;

    for (int i : num)
    {
        if (i > avg)
            count++;
    }
    return count;
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

    cout << "Above Average: " << countingAboveAverage(v) << endl;
}