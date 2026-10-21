#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 1. Stack
string reverse_stack(string s)
{
    int len = s.length();
    stack<int> st;

    for (char c : s)
        st.push(c);

    for (int i = 0; i < s.length(); i++)
    {
        s[i] = st.top();
        st.pop();
    }
    return s;
}

// 2. Inbuilt reverse
string reverse_(string s)
{
    reverse(s.begin(), s.end());
    return s;
}

// 3. Two pointer
string revese_twopointer(string s)
{
    int left = 0, right = s.length() - 1;

    while (left < right)
    {
        swap(s[left++], s[right--]);
    }
    return s;
}

int main()
{
    string s;
    cout << "Enter a Sentence: ";
    getline(cin, s);
    cout << reverse_(s) << endl;
    cout << reverse_stack(s) << endl;
    cout << revese_twopointer(s) << endl;

    return 0;
}