/*
 * Program: Factorial Calculator
 * Description: Reads a number and calculates its factorial using recursion.
 * Example: Input 5 → Output 5! = 120
 */

#include <iostream>

long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int n;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;

    std::cout << factorial(n) << std::endl;
    return 0;
}

// time - O(n)
// space - O(n)