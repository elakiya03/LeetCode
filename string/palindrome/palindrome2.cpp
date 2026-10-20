/*
 * Program: Palindrome Checker (C++)
 * Description: Reads a word and reports whether it is a palindrome.
 */

#include <iostream>
using namespace std;

bool palindrome(string word)
{
    // string rev = word;
    // reverse(rev.begin(), rev.end());

    // if (word == rev)
    //     cout << "Palindrome" << endl;
    // else
    //     cout << "Not Palindrome" << endl;

    return word == string(word.rbegin(), word.rend()) ? true : false;
}
int main()
{
    string s;
    getline(cin, s);
    cout << (palindrome(s) ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}