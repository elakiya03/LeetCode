#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// 1. Using single pointer
bool is_palindrome(char *str)
{
    int length = strlen(str);

    for (int i = 0; i < length / 2; i++)
    {
        if (tolower(str[i]) != tolower(str[length - i - 1]))
        {
            return false;
        }
    }
    return true;
}

// 2. Two pointer
bool is_palindrome_two_pointer(char str[])
{
    int length = strlen(str);
    int left = 0, right = length - 1;

    while (left < right)
    {
        if (tolower(str[left++]) != tolower(str[right--]))
            return false;
    }
    return true;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // remove newline
    str[strcspn(str, "\n")] = '\0';

    printf("%s\n", is_palindrome(str) ? "Yes" : "No");
    printf("%s\n", is_palindrome_two_pointer(str) ? "yes" : "no");
    return 0;
}