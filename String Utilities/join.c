/*
 * Program: Word Repetition
 * Description: Reads a word and a number n, then concatenates (repeats)
 * the word n times and prints the result.
 * Example: Input "hello" and 3 → Output "hellohellohello"
 */

#include <stdio.h>
#include <string.h>
int main()
{
    char word[100];
    int n;
    scanf("%s", word);
    scanf("%d", &n);

    char join[300] = "";
    for (int i = 0; i < n; i++)
    {
        strcat(join, word);
    }
    printf("%s\n", join);
    return 0;
}