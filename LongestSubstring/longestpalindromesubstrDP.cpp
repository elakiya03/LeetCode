#include <iostream>
using namespace std;

string longestPalindromeSubstring(string s)
{
    int n = s.length();
    vector<vector<bool>> dp(n, vector<bool>(n, false));

    // length 1 is always palindrome
    for (int i = 0; i < n; i++)
        dp[i][i] = true;

    int start = 0;
    int max = 1;

    // length 2
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            dp[i][i + 1] = true;
            start = i;
            max = 2;
        }
    }

    // length >=3
    for (int len = 3; len <= n; len++) //current substring length
    {
        for (int i = 0; i <= n - len; i++) // start index of substring
        {
            int j = len - 1 + i; // ending index
            if (s[i] == s[j] && dp[i + 1][j - 1])
            {
                dp[i][j] = true;

                if (len > max)
                {
                    max = len;
                    start = i;
                }
            }
        }
    }

    return s.substr(start, max);
}
int main()
{

    string s;
    getline(cin, s);
    cout << longestPalindromeSubstring(s);
    return 0;
}