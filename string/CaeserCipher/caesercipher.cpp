#include <iostream>
using namespace std;

string encryption(string str, int n)
{
    string result = "";

    for (int i = 0; i < str.length(); i++)
    {
        char c = tolower(str[i]);

        if (c >= 'a' && c <= 'z')
        {
            c = (char)((c - 'a' + n) % 26 + 'a');
            result += c;
        }
    }

    return result;
}

int main()
{
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    int shift;
    cout << "Enter shift value: ";
    cin >> shift;

    cout << encryption(text, shift) << endl;
    return 0;
}

/*
'a' = 0
'b' = 1
...
'z' = 25

1. Convert letter to number
   c - 'a'

2. Add shift
   (c - 'a') + n

3. Wrap around using % 26
   ((c - 'a') + n) % 26

4. Convert back to letter
   + 'a'

Example:
"c" with shift 3

Step 1: 'c' - 'a' = 2
Step 2: 2 + 3 = 5
Step 3: 5 % 26 = 5
Step 4: 5 + 'a' = 'f'
*/