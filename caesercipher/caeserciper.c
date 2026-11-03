#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char *encryption(char s[], int n)
{

    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        char c = tolower(s[i]);
        if (c >= 'a' && c <= 'z')
        {
            c = (char)((c - 'a' + n) % 26 + 'a');
            s[i] = c;
        }
    }
    return s;
}
int main()
{
    char s[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int shift;
    printf("Enter shift value: ");
    scanf("%d", &shift);

    printf("%s\n", encryption(s, shift));
    return 0;
}