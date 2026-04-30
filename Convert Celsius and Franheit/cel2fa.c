/*
 * Program: Celsius to Fahrenheit Converter
 * Description: Reads a temperature in Celsius and converts it to Fahrenheit.
 * Formula: F = (C × 9/5) + 32
 * Example: Input 25°C → Output 77.0°F
 */

#include <stdio.h>

float celToFah(int cel)
{
    return cel * 9 / 5 + 32;
}
int main()
{
    printf("Enter a temperature in celcius: ");
    int celcius;
    scanf("%d", &celcius);
    float result = celToFah(celcius);
    printf("Equivalent Fahrenheit: %.1f\n", result);
    return 0;
}