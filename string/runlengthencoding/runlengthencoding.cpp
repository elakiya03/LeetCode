#include <iostream>
#include <map>
using namespace std;

string runLengthEncoding(string s)
{
    int count = 1;
    string res = "";

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
    {
        if (s[i] == s[i + 1])
            count++;
        else
        {
            res += s[i];
            res += to_string(count);
            count = 1;
        }
    }
    return res;
}

int main()
{
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);
    cout << runLengthEncoding(s) << endl;
    return 0;
}