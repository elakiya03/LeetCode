/*
 * Program: BMI Calculator
 * Description: Reads weight (kg) and height (m), then calculates and displays BMI.
 * BMI = weight / (height * height)
 */

#include <stdio.h>

int main()
{
    double weight, height;
    scanf("%lf", &weight); // in kg
    scanf("%lf", &height); // in m

    if (height == 0)
    {
        printf("Division by zero\n");
    }
    else
    {
        printf("BMI: %.1lf", weight / (height * height));
    }

    return 0;
}
