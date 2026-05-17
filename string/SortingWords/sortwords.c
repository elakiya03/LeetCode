/*
 * Program: Word Sorter
 * Description: Reads an integer n, followed by n words. Sorts the words in alphabetical order and prints them.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    return strcmp(*(char **)a, *(char **)b);
}
int main()
{
    int n;
    scanf("%d", &n);

    getchar(); // consume newline

    char *str[n];

    for (int i = 0; i < n; i++)
    {
        str[i] = (char *)malloc(100 * sizeof(char));
        fgets(str[i], 100, stdin);
    }

    qsort(str, n, sizeof(char *), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%s ", str[i]);
        free(str[i]);
    }
    return 0;
}