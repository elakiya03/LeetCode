/*
 * Program: Reverse Words using Stack
 * Description: Reads a sentence and reverses the order of its words using a stack.
 */

#include <iostream>
#include <sstream>
using namespace std;

string reverseWords(string sentence)
{
    stringstream ss(sentence);
    stack<string> s;
    string word;

    while (ss >> word)
    {
        s.push(word);
    }

    word = "";

    while (!s.empty())
    {
        word += s.top();
        s.pop();
        if (!s.empty())
            word += " ";
    }
    return word;
}

int main()
{
    string sentence;
    getline(cin, sentence);
    cout << reverseWords(sentence) << endl;
    return 0;
}