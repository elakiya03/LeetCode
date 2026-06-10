#include <iostream>
using namespace std;

string reverse(string s)
{
    int len = s.length();
    stack<int> ss;
    for (char c : s)
    {
        ss.push(c);
    }
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = ss.top();
        ss.pop();
    }
    return s;
}
int main()
{
    string s;
    getline(cin, s);
    cout << reverse(s) << endl;

    return 0;
}