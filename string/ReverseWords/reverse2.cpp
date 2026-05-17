/*
 * Program: Reverse Words using Stack
 * Description: Reads a sentence and reverses the order of its words using a stack.
 */

#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);

    stringstream ss(sentence);
    stack<string> s;
    string word;

    while (ss >> word)
    {
        s.push(word);
    }

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
        if (!s.empty())
            cout << " ";
    }
    cout << endl;
    return 0;
}