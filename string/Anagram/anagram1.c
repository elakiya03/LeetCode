#include <stdio.h>
#include <string.h>

const char *is_anagram(char s1[], char s2[])
{
    if (strlen(s1) != strlen(s2))
        return "No";

    int arr[26] = {0};

    for (int i = 0; i < strlen(s1); i++)
    {
        arr[s1[i] - 'a']++;
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
    printf("Enter a String 1: ");
    fgets(word1, sizeof(word1), stdin);
    printf("Enter a String 2: ");
    fgets(word2, sizeof(word2), stdin);
    printf("%s\n", is_anagram(word1, word2));
    return 0;
}