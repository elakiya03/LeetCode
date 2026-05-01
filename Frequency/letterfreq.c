/*
 * Program: Letter Frequency Counter
 * Description: Reads a string and counts the frequency of each letter (case insensitive). Prints each letter that appears along with its count.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    int arr[26] = {0};

    for (int i = 0; i < strlen(str); i++)
    {
        char c = tolower(str[i]);
        if (c >= 'a' && c <= 'z')
        {
            arr[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            printf("%c:%d\n", ('a' + i), arr[i]);
        }
    }
    return 0;
}