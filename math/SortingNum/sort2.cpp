/*
 * Program: Three Number Sorter
 * Description: Reads three integers and sorts them in ascending order. Prints the sorted numbers.
 */

#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (x > y)
        swap(x, y);
    if (x > z)
        swap(x, z);
    if (y > z)
        swap(y, z);

    cout << x << " " << y << " " << z << endl;

    return 0;
}