/*
 * Program: Remove Consecutive Duplicates
 * Description: Reads a string and removes consecutive duplicate characters.
 */

#include <stdio.h>
#include <string.h>

const char *removeDuplicateChar(char *str)
{
    int length = strlen(str);

    static char result[100]; //it is local variable. so static -> whole program
    int pos = 0;

    for (int i = 0; i < length; i++)
    {
        if (i == 0 || str[i] != str[i - 1])
        {
            result[pos++] = str[i];
        }
    }
    result[pos] = '\0';
    return result;
}
int main()
{
    char sentence[100];
    fgets(sentence, sizeof(sentence), stdin);
    // remove newline
    sentence[strcspn(sentence, "\n")] = '\0';
    printf("%s\n", removeDuplicateChar(sentence));
    return 0;
}