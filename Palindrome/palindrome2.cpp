/*
 * Program: Palindrome Checker (C++)
 * Description: Reads a word and reports whether it is a palindrome.
 */

#include <iostream>
using namespace std;

string palindrome(string word)
{
    // string rev = word;
    // reverse(rev.begin(), rev.end());

    // if (word == rev)
    //     cout << "Palindrome" << endl;
    // else
    //     cout << "Not Palindrome" << endl;

    return word == string(word.rbegin(), word.rend()) ? "Palindrome" : "No";
}
int main()
{
    string s;
    getline(cin, s);
    cout<<palindrome(s);
    return 0;
}