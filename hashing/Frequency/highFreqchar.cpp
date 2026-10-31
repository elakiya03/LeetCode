/*
 * Program: Highest Frequency Character
 * Description: Reads a string and finds the letter with the highest frequency (case insensitive). Prints the letter and its count.
 */

#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int arr[26] = {0};

    for (char c : str)
    {
        arr[tolower(c) - 'a']++;
    }

    int high = 0;
    char res = 'a';

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > high)
        {
            high = arr[i];
            res = i + 'a';
        }
    }
    cout << res << endl;
    return 0;
}