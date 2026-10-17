#include <iostream>
using namespace std;

int countVowels(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string s;
    cout<<"Enter a sentence: ";
    getline(cin, s);
    cout << "Vowels Count: " << countVowels(s) << endl;
    return 0;
}