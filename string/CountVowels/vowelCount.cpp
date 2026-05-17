/*
 * Program: Vowel Counter (C++)
 * Description: Reads a string and counts the number of vowels in it.
 */

#include <iostream>
using namespace std;

int countVowels(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string s;
    getline(cin, s);
    cout << "Vowels: " << countVowels(s) << endl;
    return 0;
}