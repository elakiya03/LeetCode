#include <iostream>
using namespace std;

string longestPalindromeSubstring(string s)
{
    int n = s.length();
    int start = 0;
    int max = 1;

    auto expand = [&](int left, int right)
    {
        while (left >= 0 && right < n && s[left] == s[right])
        {

            left--;
            right++;
        }

        int len = right - left - 1;
        if (len > max)
        {
            max = len;
            start = left + 1;
        }
    };
    for (int i = 0; i < n; i++)
    {
        expand(i, i);     // odd length
        expand(i, i + 1); // even length
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