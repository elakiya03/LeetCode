#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isSubSeq(char s1[], char s2[])
{
    int n = strlen(s1);
    int m = strlen(s2);
    if (m > n)
        return false;

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (s2[j] == s1[i])
            j++;
        i++;
    }
    return j == m;
}

int main()
{
    char s1[100];
    printf("Enter a string: ");
    scanf("%s", s1);
    char s2[100];
    printf("Enter a sequence: ");
    scanf("%s", s2);
    printf("\nIs %s subsequence of %s?: %s\n", s2, s1, isSubSeq(s1, s2) ? "Yes" : "No");
    return 0;
}