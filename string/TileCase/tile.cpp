/*
 * Program: Tile Case Converter (C++)
 * Description: Reads a sentence and capitalizes the first letter of each word.
 */

#include <iostream>
using namespace std;

string tileCase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (!s.empty())
        {
            s.at(0) = toupper(s.at(0));
        }
        if (isalpha(s[i]) && s[i - 1] == ' ')
        {
            s[i] = toupper(s[i]);
        }
    }
    return s;
}
int main()
{
    string s;
    getline(cin, s);
    cout << tileCase(s) << endl;

    return 0;
}