/*
 * Program: Word Counter (C++)
 * Description: Reads a string and counts the number of words in it.
 * A word is defined as any sequence of characters separated by spaces.
 */

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int count = 0;

    if (!str.empty() && str[0] != ' ')
        count = 1;

    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
            count++;
    }

    cout << "Words: " << count << endl;
}