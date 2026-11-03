#include <iostream>

int main()
{
    int x, y, z;
    std::cout << "Enter 3 elements: ";
    std::cin >> x >> y >> z;

    int small = (x < y) ? ((x < z) ? x : z)
                        : ((y < z) ? y : z);

    std::cout << "Smallest: " << small << std::endl;
    return 0;
}