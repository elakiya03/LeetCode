/*
 * Program: Highest Frequency Character
 * Description: Reads a string and finds the letter with the highest frequency (case insensitive). Prints the letter and its count.
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    int arr[26] = {0};

    for (int i = 0; i < strlen(str); i++)
    {
        arr[tolower(str[i]) - 'a']++;
    }

    int high = 0;
    char res = 'a';

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > high)
        {
            high = arr[i];
            res = i + 'a';
        }
    }
    printf("%c\n", res);
    return 0;
}