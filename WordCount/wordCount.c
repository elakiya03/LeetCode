/*
 * Program: Word Counter
 * Description: Reads a string and counts the number of words in it.
 * A word is defined as any sequence of characters separated by spaces.
 */

#include <stdio.h>
#include <string.h>
int main()
{
    char s[500];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0; // go through str until hit \n, give me that position

    int count = 0;

    // first word check
    if (s[0] != '\0' && s[0] != ' ')
        count = 1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i + 1] != '\0' && s[i + 1] != ' ')
            count++;
    }
    printf("%d words\n", count);
    return 0;
}