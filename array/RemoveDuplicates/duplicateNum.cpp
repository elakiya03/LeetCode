#include <iostream>
#include <vector>
#include <unordered_set>
#include <map>

using namespace std;

// Hashing set Approach - preserve the order
void removeDuplicateNumber(vector<int> &v)
{

    unordered_set<int> seen;

    for (int i : v)
        if (seen.find(i) == seen.end())
        {
            cout << i << " ";
            seen.insert(i);
        }
}

// Hashing map Approach - This appraoch may not preserve the order
void removeDuplicateNumberUsingHashMap(vector<int> &v)
{
    unordered_map<int, int> m;

    for (int i = 0; i < v.size(); i++)
    {
        if (m.find(v.at(i)) == m.end()) // find only search key not values
        {
            m.insert({v.at(i), i});
        }
    }

    for (auto it = m.begin(); it != m.end(); ++it)
    {
        cout << it->first << " ";
    }
}

int main()
{
    int n;
    cout << "Enter no of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter " << n << " elements" << endl;
    for (int &x : v)
    {
        cin >> x;
    }

    removeDuplicateNumber(v);
    removeDuplicateNumberUsingHashMap(v);
    return 0;
}