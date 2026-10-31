#include <iostream>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int sum = 0;
    int totalSum = 0;
    int n = nums.size();

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        totalSum += i;
    }

    return totalSum + n - sum;
}
int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << missingNumber(v) << endl;

    return 0;
}