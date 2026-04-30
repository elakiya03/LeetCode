/*
 * Program: Find Smallest Number (C++)
 * Description: Reads three numbers and finds and displays the smallest among them.
 * Uses ternary operators for comparison.
 */

#include <iostream>

int main()
{
    int x, y, z;
    std::cin >> x >> y >> z;

    int small = (x < y) ? ((x < z) ? x : z)
                        : ((y < z) ? y : z);

    std::cout << "Smallest: " << small << std::endl;
    return 0;
}