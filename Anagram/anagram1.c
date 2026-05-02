/*
 * Program: Anagram Checker
 * Description: Reads two strings and checks if they are anagrams. Prints "Yes" if they are, "No" otherwise.
 */

#include <stdio.h>
#include <string.h>

const char *isAnagram(char s1[], char s2[])
{
    if (strlen(s1) != strlen(s2))
        return "No";

    int arr[26] = {0};

    for (int i = 0; i < strlen(s1); i++)
    {
        arr[s1[i] - 'a']++;
    }

    for (int i = 0; i < strlen(s2); i++)
    {
        arr[s2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
            return "No";
    }
    return "Yes";
}

int main()
{
    char word1[100], word2[100];
    fgets(word1, sizeof(word1), stdin);
    fgets(word2, sizeof(word2), stdin);
    printf("%s\n", isAnagram(word1, word2));
    return 0;
}