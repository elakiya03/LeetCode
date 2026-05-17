/*
 * Program: Run Length Encoding
 * Description: Reads a string and performs run-length encoding. Prints each character followed by its consecutive count.
 */

#include <stdio.h>

void runLengthEncoding(char str[])
{
    int count = 1;

    for (int i = 0; i < str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (str[i] == str[i + 1])
            count++;
        else
        {
            printf("%c%d", str[i], count);
            count = 1;
        }
    }
}

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    runLengthEncoding(str);
    return 0;
}