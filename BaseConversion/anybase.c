/*
 * Program: Base Conversion to Decimal
 * Description: Reads a number and its source base and target base, converts num to target base and prints the result.
 */

#include <stdio.h>

int toDecimal(char num[], int src)
{
    int dec = 0;
    for (int i = 0; num[i] != '\0' && num[i] != '\n'; i++)
    {
        int digit = num[i] - '0';
        dec = dec * src + digit;
    }
    return dec;
}

const char *baseConversion(char num[], int src, int base)
{
    int n = toDecimal(num, src);

    if (n == 0)
        return "0";

    static char result[100];
    int len = 0;
    while (n > 0)
    {
        result[len++] = (char)('0' + n % base);
        n /= base;
    }
    // reverse string
    for (int i = 0; i < len / 2; i++)
    {
        char temp = result[i];
        result[i] = result[len - i - 1];
        result[len - i - 1] = temp;
    }
    return result;
}
int main()
{
    char num[100];
    fgets(num, sizeof(num), stdin);

    int src, tgt;
    scanf("%d%d", &src, &tgt);
    printf("%s\n", baseConversion(num, src, tgt));

    return 0;
}