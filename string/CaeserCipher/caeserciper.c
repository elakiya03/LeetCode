/*
 * Program: Caesar Cipher Encryptor
 * Description: Reads a string and a shift value, encrypts the string using Caesar cipher, and prints the encrypted text.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char *encryption(char s[], int n)
{

    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        char c = tolower((s[i] - 'a' + n) % 26 + 'a');
        if (c >= 'a' && c <= 'z')
            s[i] = c;
    }
    return s;
}
int main()
{
    char s[100];
    fgets(s, sizeof(s), stdin);

    int shift;
    scanf("%d", &shift);

    printf("%s\n", encryption(s, shift));
    return 0;
}