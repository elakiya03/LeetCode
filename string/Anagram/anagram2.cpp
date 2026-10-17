#include <iostream>
using namespace std;

// Sorting
bool isAnagram(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;
}

int main()
{
    string word1, word2;
    printf("Enter a String 1: ");
    getline(cin, word1);
    printf("Enter a String 2: ");
    getline(cin, word2);

    cout << (isAnagram(word1, word2) ? "Yes" : "No") << endl;

    return 0;
}