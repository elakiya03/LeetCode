/*
 * Program: Palindrome Checker (C++)
 * Description: Reads a string and checks whether it is a palindrome.
 */

#include <iostream>
using namespace std;

int main()
{

    string word;
    getline(cin, word);

    int l = word.length();

    for (int i = 0; i < word.length() / 2; i++)
    {
        if (tolower(word[i]) != tolower(word[l - i - 1]))
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}