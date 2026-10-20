/*
 * Program: Palindrome Checker (C++)
 * Description: Reads a string and checks whether it is a palindrome.
 */

#include <iostream>
using namespace std;

bool isPalindrome(string word)
{
    int l = word.length();

    for (int i = 0; i < word.length() / 2; i++)
    {
        if (tolower(word[i]) != tolower(word[l - i - 1]))
        {
            return false;
        }
    }
    return true;
}
int main()
{

    string word;
    getline(cin, word);
    cout << (isPalindrome(word) ? "Yes" : "No") << endl;
    return 0;
}