// 3. Longest Substring without Repeating Characters

#include <iostream>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    unordered_set<char> set;
    // stores characters currently in window (no duplicates)

    int left = 0;   // start of window
    int i = 0;      // end of window (right pointer)
    int maxLen = 0; // answer

    // move right pointer through string
    while (i < s.length())
    {
        // CASE 1: character NOT in set → safe to expand window
        if (set.find(s[i]) == set.end())
        {
            set.insert(s[i]); // add current char to window
            i++;              // expand window to right

            // update max length
            // window size = i - left
            maxLen = max(maxLen, i - left);
        }
        else
        {
            // CASE 2: duplicate found

            // IMPORTANT IDEA:
            // we don't know where duplicate is
            // so shrink window from left one by one

            set.erase(s[left]); // remove leftmost char
            left++;             // move window start forward

            // NOTE:
            // we DO NOT move i here
            // we first fix duplicate, then try again
        }
    }

    return maxLen;
}

int main()
{
    string s;
    getline(cin, s);

    cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}