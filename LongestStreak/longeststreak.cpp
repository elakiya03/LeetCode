/*
 * Program: Longest Streak
 * Description: Reads an integer n, followed by n integers. Finds the length of the longest consecutive streak of the same number and prints it.
 */

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
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Longest streak: " << longestStreak(v) << endl;
    return 0;
}