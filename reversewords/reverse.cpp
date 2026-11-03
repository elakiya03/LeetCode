#include <iostream>
#include <sstream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

// 1. Stack
string reverse_words_stack(string sentence)
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

// 2. String Stream + std::reverse
string reverse_words(string sentence)
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
    for (size_t i = 0; i < v.size(); i++)
    {
        if (i > 0)
        {
            word += ' ';
        }
        word += v[i];
    }
    return word;
}

// 3. Two Pointer (swap words from both ends)
string reverse_words_two_pointer(string sentence)
{
    stringstream ss(sentence);
    vector<string> words;
    string word;

    while (ss >> word)
    {
        words.push_back(word);
    }

    if (words.empty())
    {
        return "";
    }

    size_t left = 0;
    size_t right = words.size() - 1;
    while (left < right)
    {
        swap(words[left], words[right]);
        left++;
        right--;
    }

    word = "";
    for (size_t i = 0; i < words.size(); i++)
    {
        if (i > 0)
        {
            word += ' ';
        }
        word += words[i];
    }
    return word;
}

int main()
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    cout << reverse_words_stack(sentence) << endl;
    cout << reverse_words(sentence) << endl;
    cout << reverse_words_two_pointer(sentence) << endl;
    return 0;
}