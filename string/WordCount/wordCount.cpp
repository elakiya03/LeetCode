#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

// 1. Using String Stream
int noOfWords(string str)
{
    stringstream ss(str);
    string word;
    int count = 0;
    while (ss >> word) // Extract words separated by spaces, tabs, or newlines
    {
        count++;
    }
    return count;
}

// 2. Normal flow
int no_of_words(string str)
{
    int count = 0;

    if (!str.empty() && str[0] != ' ')
        count = 1;

    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
            count++;
    }
    return count;
}

int main()
{
    string str;
    printf("Enter a sentence: ");
    getline(cin, str);

    cout << "Words: " << no_of_words(str) << endl;

    cout << "Words: " << noOfWords(str) << endl;
}