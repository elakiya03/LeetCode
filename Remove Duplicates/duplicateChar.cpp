/*
 * Program: Remove Consecutive Duplicates (C++)
 * Description: Reads a string and removes consecutive duplicate characters.
 */

#include <iostream>
using namespace std;

string removeDuplicateChar(string str)
{
    string result;
    for (int i = 0; i < str.length(); i++)
    {
        if (i == 0 || str[i] != str[i - 1])
        {
            result += str[i];
        }
    }
    return result;
}
int main()
{
    string s;
    getline(cin, s);
    cout << removeDuplicateChar(s) << endl;

    return 0;
}