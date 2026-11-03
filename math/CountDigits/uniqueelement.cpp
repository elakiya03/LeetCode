/*
 * Program: Count Unique Elements
 * Description: Reads an integer n, followed by n integers. Counts the number of unique elements in the array and prints the count.
 */

#include <iostream>
#include <unordered_map>
using namespace std;

int countUniqueElements(vector<int> &v)
{
    int count = 0;
    unordered_map<int, int> freq;

    for (int i : v)
        freq[i]++;

    for (auto x : freq)
        if (x.second == 1)
            count++;
    return count;
}
int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "Unique: " << countUniqueElements(v) << endl;
    return 0;
}