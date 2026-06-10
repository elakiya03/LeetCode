/*
 * Program: Reverse Words
 * Description: Reads a sentence and reverses the order of its words.
 */

#include <iostream>
#include <sstream> //string stream
using namespace std;

string reverseWords(string sentence)
{
    stringstream ss(sentence);
    vector<string> v;
    string word;

    while (ss >> word)
    {
        v.push_back(word);
    }
    reverse(v.begin(), v.end());

    word = "";
    for (int i = 0; i < v.size(); i++)
    {
        if (i > 0)
        {
            word += ' ';
        }
        word += v[i];
    }
    return word;
}

int main()
{
    string sentence;
    getline(cin, sentence);

    
    return 0;
}