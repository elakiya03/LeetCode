/*
 * Program: Area Calculator (C++)
 * Description: Calculates the area of different shapes (Rectangle, Triangle, Circle).
 * User selects shape type and enters required dimensions.
 */

#include <iostream>
#include <iomanip>
#define PI 3.14

int main()
{
    int n;
    float area = 0;
    std::cout << "Enter any one of these" << std::endl
              << "1. Rectangle" << std::endl
              << "2. Triangle" << std::endl
              << "3. Circle" << std::endl;

    std::cin >> n;

    switch (n)
    {
    case 1:
        int length, breadth;
        std::cout << "Enter Length: ";
        std::cin >> length;
        std::cout << "Enter Breadth: ";
        std::cin >> breadth;
        area = length * breadth;
        break;
    case 2:
        int base, height;
        std::cout << "Enter Base: ";
        std::cin >> base;
        std::cout << "Enter height: ";
        std::cin >> height;
        area = base * height / 2.0;
        break;
    case 3:
        int radius;
        std::cout << "Enter radius: ";
        std::cin >> radius;
        area = PI * radius * radius;
        break;
    default:
        std::cout << "Invalid input" << std::endl;
        return 0;
    }
    std::cout << std::fixed << std::setprecision(2) << "Area: " << area << std::endl;
    return 0;
}