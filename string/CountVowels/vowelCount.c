/*
 * Program: Vowel Counter
 * Description: Reads a string and counts the number of vowels in it.
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int countVowels(char *s)
{
    int count = 0;
    // int length = sizeof(s) / sizeof(s[0]);
    int l = strlen(s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        char c = tolower(s[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    // remove newline
    str[strcspn(str, "\n")] = '\0';
    printf("%d\n", countVowels(str));
    return 0;
}