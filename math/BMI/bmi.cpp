/*
 * Program: BMI Calculator (C++)
 * Description: Reads weight (kg) and height (m), calculates BMI with exception handling.
 * Throws exception for zero height (division by zero).
 */

#include <iostream>
#include <iomanip>

int main()
{
    try
    {
        double weight, height;

        std::cin >> weight;
        std::cin >> height;
        if (height == 0)
        {
            throw std::runtime_error("Division by Zero");
        }
        std::cout << std::fixed << std::setprecision(1) << "BMI: " << weight / (height * height) << std::endl;
    }
    catch (std::runtime_error &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}

/*
Input should be
45
1.67

*/