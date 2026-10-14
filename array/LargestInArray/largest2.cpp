#include <iostream>
#include <algorithm>
using namespace std;

int largestInArray(vector<int> &num)
{

    // std::max_element: A built-in algorithm that finds the largest value in a given range.
    // Iterators (.begin(), .end()): Modern C++ tools used to safely navigate through containers without using raw array indexes.
    // Dereferencing(*) : The action of converting a memory address / pointer back into its actual value.int largestInArray(vector<int> & num)

    return *max_element(num.begin(), num.end());
}

int main()
{
    vector<int> v;
    int n;
    cout << "Enter no of elements: ";
    cin >> n;

    cout << "Enter " << n << " values" << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Largest: " << largestInArray(v) << endl;

    return 0;
}