/*
 * Program: Pair Sum Finder
 * Description: Reads an integer n, followed by n integers and a target sum. Finds all pairs of numbers that add up to the target and prints them.
 */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int target;
    cin >> target;

    unordered_map<int, int> index; // value -> first index seen

    int best_i = n, best_j = n;

    for (int i = 0; i < n; i++)
    {
        int need = target - v[i];

        if (index.find(need) != index.end())
        {
            int j = index[need];

            // ensure earliest pair (by indices)
            if (j < best_i || (j == best_i && i < best_j))
            {
                best_i = j;
                best_j = i;
            }
        }

        // store only first occurrence of value
        if (index.find(v[i]) == index.end())
        {
            index[v[i]] = i;
        }
    }

    if (best_i != n)
    {
        cout << v[best_i] << " " << v[best_j];
    }
    else
    {
        cout << "No pair found";
    }

    return 0;
}