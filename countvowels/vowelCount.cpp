#include <iostream>
using namespace std;

int vowels_count(string s)
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
    cout << "Vowels Count: " << vowels_count(s) << endl;
    return 0;
}