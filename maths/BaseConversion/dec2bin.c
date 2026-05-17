/*
 * Program: Decimal to Binary Converter
 * Description: Reads a decimal number and converts it to binary. Prints the binary representation.
 */

#include <stdio.h>

void toBinary(int n)
{
    char binary[100];
    int len = 0;
    while (n > 0)
    {
        binary[len++] = (char)('0' + n % 2);
        n /= 2;
    }

    // print reverse
    for (int i = len - 1; i >= 0; i--)
        printf("%c", binary[i]);
}

int main()
{
    int n;
    scanf("%d", &n);
    toBinary(n);
    return 0;
}