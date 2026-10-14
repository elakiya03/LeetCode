#include <iostream>
using namespace std;

int longestStreak(vector<int> &num)
{
    int maxstreak = 1;
    int streak = 1;

    for (int i = 1; i < num.size(); i++)
    {
        if (num.at(i) == num.at(i - 1))
        {
            streak++;
            if (streak > maxstreak)
            {
                maxstreak = streak;
            }
        }
        else
            streak = 1;
    }
    return maxstreak;
}
int main()
{
    vector<int> v;
    int n;
    cout << "Enter no of elements:";
    cin >> n;

    cout << "Enter " << n << " values" << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Longest streak: " << longestStreak(v) << endl;
    return 0;
}