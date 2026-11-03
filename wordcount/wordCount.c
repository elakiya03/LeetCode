#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// 1
int no_of_words(char *sentence)
{

    int count = 0;

    // first word check
    if (sentence[0] != '\0' && sentence[0] != ' ')
        count = 1;

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ' ' && sentence[i + 1] != '\0' && sentence[i + 1] != ' ')
            count++;
    }

    return count;
}

// 2
int noOfWords(char sentence[])
{
    int count = 0;
    bool flag = false;

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (isspace(sentence[i]))
        {
            flag = false; // Outside word: flase
        }
        else if (isalnum(sentence[i]) && !flag)
        {
            count++;
            flag = true; // Inside word: true
        }
    }
    return count;
}

int main()
{
    char s[500];
    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0; // go through str until hit \n, give me that position

    printf("%d words\n", no_of_words(s));
    printf("%d words\n", noOfWords(s));
    return 0;
}