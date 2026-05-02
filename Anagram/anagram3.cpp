/*
 * Program: Anagram Checker (Map Method)
 * Description: Reads two strings and uses a map to check if they are anagrams. Prints "Yes" if they are, "No" otherwise.
 */

#include <iostream>
#include <map>
using namespace std;

string isAnagram(string s1, string s2)
{
    if (s1.length() != s2.length())
        return "No";

    map<char, int> m;

    for (char c : s1)
        m[c]++;

    for (char c : s2)
        m[c]--;

    for (auto x : m)
    {
        if (x.second != 0)
            return "No";
    }
    return "Yes";
}

int main()
{
    string word1, word2;
    getline(cin, word1);
    getline(cin, word2);

    cout << isAnagram(word1, word2) << endl;
    return 0;
}