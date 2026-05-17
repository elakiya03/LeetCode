/*
 * Program: Count Above Average
 * Description: Reads an integer n, followed by n integers. Calculates the average and counts how many numbers are above the average. Prints the count.
 */

#include <iostream>
using namespace std;

int countingAboveAverage(vector<int> &num)
{
    int count = 0;
    int sum = 0;

    for (int i : num)
    {
        sum += i;
    }
    int avg = sum / num.size();

    for (int i : num)
    {
        if (i > avg)
            count++;
    }
    return count;
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "Above Average: " << countingAboveAverage(v) << endl;
}