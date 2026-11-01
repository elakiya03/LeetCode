/*
 * Program: String to Uppercase Converter
 * Description: Reads a string and converts all characters to uppercase.
 * Also displays the length of the string.
 */

#include <stdio.h>
#include <string.h> //strlen strcspn
#include <ctype.h>  //toupper
int main()
{
    char s[100];
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = 0; // finds position of \n and replace it with '\0'

    for (int i = 0; s[i]; i++)
    {
        s[i] = toupper(s[i]);
    }

    printf("%s\n", s);
    printf("Length: %zu\n", strlen(s));
    return 0;
}