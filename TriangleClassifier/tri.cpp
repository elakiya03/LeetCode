/*
 * Program: Triangle Classifier (C++)
 * Description: Reads three side lengths, checks validity, and prints the triangle type or invalid.
 */

/*
Read three side lengths from input (three lines).

First check if the sides can form a valid triangle. A triangle is valid if the sum of any two sides is greater than the third side.

If not valid, print Not a triangle.

If valid, print the type:

Equilateral if all three sides are equal
Isosceles if exactly two sides are equal
Scalene if no sides are equal

*/
#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if ((x + y <= z) || (y + z <= x) || (x + z <= y))
    {
        cout << "Not a triangle" << endl;
    }
    else
    {
        if (x == y && x == z)
        {
            cout << "Equilateral" << endl;
        }

        else if ((x == y) || (x == z) || (y == z))
        {
            cout << "Isosceles" << endl;
        }
        else if (x != y && y != z && z != x)
        {
            cout << "Scalene" << endl;
        }
    }

    return 0;
}