#include <iostream>
using namespace std;

// 1. Single Pointer
bool is_palindrome(string word)
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

// 2. Reverse string and compare

bool is_palindrome_reverse(string word)
{
    // string rev = word;
    // reverse(rev.begin(), rev.end());

    // if (word == rev)
    //     cout << "Palindrome" << endl;
    // else
    //     cout << "Not Palindrome" << endl;

    return word == string(word.rbegin(), word.rend()) ? true : false;
}

// 3. Two Pointer
bool is_palindrome_twopointer(string word)
{
    int left = 0, right = word.length() - 1;

    while (left < right)
    {
        if (tolower(word[left++]) != tolower(word[right--]))
            return false;
    }
    return true;
}

int main()
{

    string word;
    cout << "Enter a word: ";
    getline(cin, word);
    cout << (is_palindrome(word) ? "Yes" : "No") << endl;
    cout << (is_palindrome_reverse(word) ? "Palindrome" : "Not Palindrome") << endl;
    cout << (is_palindrome_twopointer(word) ? "Palindrome" : "Not Palindrome") << endl;

    return 0;
}