#include <iostream>
using namespace std;

// Frequency Counting
string isAnagram(string s1, string s2)
{
    if (s1.length() != s2.length())
        return "No";

    int arr[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        arr[s1[i] - 'a']++;
        arr[s2[i] - 'a']--;
    }

    for (int i : arr)
    {
        if (i != 0)
            return "No";
    }
    return "Yes";
}

int main()
{
    string word1, word2;
    printf("Enter a String 1: ");
    getline(cin, word1);
    printf("Enter a String 2: ");
    getline(cin, word2);
    cout << isAnagram(word1, word2) << endl;
    return 0;
}