#include <stdio.h>
#include <string.h>

// Two pointer
const char *reverse(char str[])
{
    int len = strlen(str);
    int left = 0;
    int right = len - 1;
    while (left < right)
    {
        char c = str[left];
        str[left] = str[right];
        str[right] = c;

        left++;
        right--;
    }
    return str;
}

int main()
{
    char s[100];
    printf("Enter a sentence to reverse: ");
    fgets(s, sizeof(s), stdin);
    printf("Reversed sentence: %s\n", reverse(s));
    return 0;
}