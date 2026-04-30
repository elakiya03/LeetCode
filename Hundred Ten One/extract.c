/*
 * Program: Extract Digits from 3-Digit Number
 * Description: Reads a 3-digit number and extracts and displays the hundreds,
 *              tens, and ones digits separately.
 * Example: Input 457 → Hundreds: 4, Tens: 5, Ones: 7
 */

#include <stdio.h>

int main()
{

    printf("Enter 3 digit number: ");
    int n;
    scanf("%d", &n);
    printf("Hundreds: %d\n", (n / 100) % 10);
    printf("Tens: %d\n", (n / 10) % 10);
    printf("Ones: %d\n", n % 10);
    return 0;
}