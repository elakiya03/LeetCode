/*
 * Program: Extract Digits from 3-Digit Number (C++)
 * Description: Reads a 3-digit number with exception handling and extracts
 *              hundreds, tens, and ones digits separately.
 * Throws exception if number is not in range 100-999.
 */

#include <iostream>

int main()
{
    try
    {
        std::cout << "Enter 3 digit number" << std::endl;
        int n;
        std::cin >> n;

        if (n > 999 || n < 100)
        {
            throw std::out_of_range("Out of Range");
        }

        std::cout << "Hundreds: " << (n / 100) % 10 << std::endl;
        std::cout << "Tens: " << (n / 10) % 10 << std::endl;
        std::cout << "Ones: " << n % 10 << std::endl;
    }
    catch (std::out_of_range &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}