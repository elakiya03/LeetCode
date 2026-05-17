/*
 * Program: Anagram Checker (Sorting Method)
 * Description: Reads two strings, sorts them, and checks if they are anagrams. Prints "Yes" if they are, "No" otherwise.
 */

#include <iostream>
using namespace std;

string isAnagram(string s1, string s2)
{
    if (s1.length() != s2.length())
        return "No";

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2 ? "Yes" : "No";
}

int main()
{
    string word1, word2;
    getline(cin, word1);
    getline(cin, word2);

    cout << isAnagram(word1, word2) << endl;
    return 0;
}