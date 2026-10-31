#include <iostream>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{

    unordered_map<int, int> m;

    for (int i = 0; i < nums.size(); i++)
    {
        int res = target - nums[i];
        if (m.find(res) != m.end())
        {
            // res is exist in map
            return {m[res], i};
        }
        m[nums[i]] = i;
    }
    return {};
}

int main()
{
    cout << "Enter no of elements:";
    int n;
    cin >> n;

    cout << "Enter n elements\n";
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter target:";
    int target;
    cin >> target;

    nums = twoSum(nums, target);
    for (int i : nums)
    {
        cout << i << " ";
    }
    return 0;
}