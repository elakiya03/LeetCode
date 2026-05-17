/*
 * Program: Run Length Encoding
 * Description: Reads a string and performs run-length encoding. Prints each character followed by its consecutive count.
 */

#include <iostream>
#include <map>
using namespace std;

void runLengthEncoding(string s)
{
    map<char, int> m;

    for (int i = 0; i < s.length(); i++)
        m[s[i]]++;

    for (auto x : m)
        cout << x.first << x.second;
}

int main()
{
    string s;
    getline(cin, s);
    runLengthEncoding(s);
    return 0;
}