#include <iostream>
#include <map>
using namespace std;

// Hashing
bool isAnagram(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;

    map<char, int> m;

    for (char c : s1)
        m[c]++;

    for (char c : s2)
        m[c]--;

    for (auto x : m)
    {
        if (x.second != 0)
            return false;
    }
    return true;
}

int main()
{
    string word1, word2;
    printf("Enter a String 1: ");
    getline(cin, word1);
    printf("Enter a String 1: ");
    getline(cin, word2);

    cout << (isAnagram(word1, word2) ? "Yes" : "No") << endl;
    return 0;
}