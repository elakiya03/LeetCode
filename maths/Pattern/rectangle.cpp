/*
 * Program: Rectangle Border Pattern (C++)
 * Description: Reads length and breadth, then prints a rectangle border made of asterisks.
 * Only the border is printed, interior is empty.
 */

#include <iostream>

int main()
{
    int length, breadth;
    std::cout << "Enter Length: ";
    std::cin >> length;
    std::cout << "Enter Breadth: ";
    std::cin >> breadth;

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < breadth; j++)
        {
            if (i == 0 || j == breadth - 1 || j == 0 || i == length - 1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}