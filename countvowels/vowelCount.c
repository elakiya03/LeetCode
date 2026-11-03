#include <stdio.h>
#include <ctype.h>
#include <string.h>

int vowels_count(char *s)
{
    int count = 0;
    // int length = sizeof(s) / sizeof(s[0]);
    int l = strlen(s);

    for (int i = 0; s[i]; i++)
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
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    // remove newline
    str[strcspn(str, "\n")] = '\0';
    printf("Vowels Count: %d\n", vowels_count(str));
    return 0;
}