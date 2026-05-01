/*
 * Program: Letter Frequency Counter
 * Description: Reads a string and counts the frequency of each letter (case insensitive). Prints each letter that appears along with its count.
 */

#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int arr[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = tolower(str[i]);
        if (c >= 'a' && c <= 'z')
            arr[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
            cout << (char)('a' + i) << ":" << arr[i] << endl;
    }

    return 0;
}