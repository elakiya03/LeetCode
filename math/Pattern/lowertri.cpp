/*
 * Program: Lower Triangle Pattern (C++)
 * Description: Reads n and prints a lower triangular star pattern.
 */

#include <iostream>

int main()
{

    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                std::cout << j << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}

/*

1
1 2
1 2 3
1 2 3 4


*/