/*
 * Program: Tile Case Converter
 * Description: Reads a sentence and capitalizes the first letter of each word.
 */

#include <stdio.h>
#include <string.h>
#include<ctype.h>

const char *tileCase(char *s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[0] != '\0')
        {
            s[0] = toupper(s[0]);
        }
        if (isalpha(s[i]) && s[i - 1] == ' ')
        {
            s[i] = toupper(s[i]);
        }
    }
    return s;
}
int main()
{
    char sentence[100];
    fgets(sentence, sizeof(sentence), stdin);

    // remove newline
    sentence[strcspn(sentence, "\n")] = '\0';

    printf("%s\n", tileCase(sentence));
    return 0;
}