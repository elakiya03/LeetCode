/*
 * Program: Longest Word Finder
 * Description: Reads a line of text and finds the longest word in it.
 */

#include <iostream>
#include <sstream>
using namespace std;

string longestWord(string str)
{
    stringstream ss(str);

    string word;
    string longest;
    while (ss >> word)
    {
        if (word.length() > longest.length())
        {
            longest = word;
        }
    }
    return longest;
}
int main()
{
    string t;
    getline(cin, t);
    cout << longestWord(t);

    return 0;
}