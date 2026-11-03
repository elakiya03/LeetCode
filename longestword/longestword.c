#include <stdio.h>
#include <ctype.h>

char *longest_word(const char text[])
{
    static char word[100];
    int best_start = 0, best_length = 0;
    int current_start = 0, current_length = 0;

    for (int i = 0; text[i]; i++)
    {
        if (isalnum((unsigned char)text[i]))
        {
            if (current_length == 0)
                current_start = i;
            current_length++;
        }
        else
        {
            if (current_length > best_length)
            {
                best_start = current_start;
                best_length = current_length;
            }
            current_length = 0;
        }
    }

    if (current_length > best_length)
    {
        best_start = current_start;
        best_length = current_length;
    }

    for (int i = 0; i < best_length; i++)
        word[i] = text[best_start + i];
    word[best_length] = '\0';
    
    return word;
}

int main()
{
    char text[100];
    printf("Enter a sentence: ");
    if (fgets(text, sizeof(text), stdin) == NULL)
        return 1;
    printf("%s\n", longest_word(text));
    return 0;
}