/*
 * Program: Reverse Words
 * Description: Reads a sentence and reverses the order of its words.
 */

#include <iostream>
#include <sstream> //string stream
using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);

    stringstream ss(sentence);
    vector<string> v;
    string word;

    // split words
    while (ss >> word)
    {
        v.push_back(word);
    }

    // reverse words
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

    cout << word << endl;
    return 0;
}