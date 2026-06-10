#include <iostream>
using namespace std;

bool isSubSeq(string s1, string s2)
{
    int n = s1.length();
    int m = s2.length();
    if (m > n)
        return false;

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (s2[j] == s1[i])
            j++;
        i++;
    }
    return j == m;
}

int main()
{
    string s1;
    cout << "Enter a string: ";
    cin >> s1;
    string s2;
    cout << "Enter a sequence: ";
    cin >> s2;
    cout << "\nIs " << s2 << " subsequence of " << s1 << "?: " << (isSubSeq(s1, s2) ? "Yes" : "No") << endl;
    return 0;
}