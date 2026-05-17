/*
 * Program: Word Frequency Counter
 * Description: Reads a string and counts the frequency of each word. Prints each word and its count.
 */

#include <iostream>
#include <sstream>
#include <map>

using namespace std;

void wordFrequency(string s)
{
    map<string, int> m = {};

    string word;
    stringstream ss(s);
    while (ss >> word)
    {
        m[word]++;
    }

    for (auto i : m)
    {
        cout << i.first << ":" << i.second << endl;
    }
}

int main()
{
    string sentence;
    getline(cin, sentence);
    wordFrequency(sentence);
    return 0;
}