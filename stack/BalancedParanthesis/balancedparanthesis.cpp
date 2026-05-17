/*
 * Program: Balanced Parentheses Checker
 * Description: Reads a string and checks if the parentheses (round and square) are balanced. Outputs "Yes" if balanced, "No" otherwise.
 */

#include <iostream>
using namespace std;

string isBalanced(string str)
{
    stack<char> s;

    for (char c : str)
    {
        if (c == '(' || c == '[')
        {
            s.push(c);
        }
        else
        {
            if ((c == ')' && s.top() == '(') || c == ']' && s.top() == '[')
            {
                s.pop();
            }
        }
    }
    return s.empty() == true ? "Yes" : "No";
}
int main()
{
    string s;
    getline(cin, s);

    cout << isBalanced(s) << endl;

    return 0;
}