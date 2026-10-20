#include <iostream>
#include <stack>
using namespace std;

// Function to remove adjacent duplicates using a stack
string remove_duplicate_char(string str)
{
    string result = "";
    stack<char> st;

    for (int i = 0; i < str.length(); i++)
    {
        // If stack is empty or current char is not equal to top of stack, push it
        if (st.empty() || st.top() != str[i])
        {
            st.push(str[i]);
        }
        // If current char is same as top of stack, skip adding it
    }

    while (!st.empty())
    {
        result = st.top() + result; // Insert at front to maintain order
        st.pop();
    }
    return result;
}
int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << remove_duplicate_char(s) << endl;

    return 0;
}