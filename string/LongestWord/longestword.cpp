#include <iostream>
#include <sstream>
using namespace std;

string longest_word(string str)
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
    cout << "Enter a sentences: ";
    getline(cin, t);
    cout << longest_word(t);

    return 0;
}