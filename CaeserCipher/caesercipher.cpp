/*
 * Program: Caesar Cipher Encryptor
 * Description: Reads a string and a shift value, encrypts the string using Caesar cipher, and prints the encrypted text.
 */

#include <iostream>
using namespace std;

string encryption(string s, int n)
{
    for (int i = 0; i < s.length(); i++)
    {
        char c = tolower((s.at(i) - 'a' + n) % 26 + 'a');
        if (c >= 'a' && c <= 'z')
            s.at(i) = c;
    }
    return s;
}
int main()
{
    string text;
    getline(cin, text);

    int shift;
    cin >> shift;

    cout << encryption(text, shift);
    return 0;
}
/*

'a'=0
'b'=1
...
'z'=25

1. convert letter to number
s[i]-'a'

2. add shift
s[i]-'a' + shift

3. wrap using %26
(c - 'a' + shift) % 26

'z' → 25
shift = 3
25 + 3 = 28
28 % 26 = 2

4. convert back to letter
+ 'a'


Eg:
c + 3

Step 1: 'c' - 'a' = 2
Step 2: 2 + 3 = 5
Step 3: 5 % 26 = 5
Step 4: 5 + 'a' = 'f'
*/