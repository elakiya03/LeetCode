/*
 * Program: Palindrome Checker
 * Description: Reads a string and checks whether it is a palindrome.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char *isPalindrome(char *str)
{
    int length = strlen(str);

    for (int i = 0; i < length / 2; i++)
    {
        if (tolower(str[i]) != tolower(str[length - i - 1]))
        {
            return "No";
        }
    }
    return "Yes";
}

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    // remove newline
    str[strcspn(str, "\n")] = '\0';

    printf("%s\n", isPalindrome(str));
    return 0;
}