#include <stdio.h>
#include <string.h>

// Two Pointer
void reverse_util(char *sentence, int left, int right)
{
    while (left < right)
    {
        char temp = sentence[left];
        sentence[left] = sentence[right];
        sentence[right] = temp;
        left++;
        right--;
    }
}
char *reverse(char sentence[])
{
    int length = strlen(sentence);
    reverse_util(sentence, 0, length - 1);

    int start = 0;
    int end = 0;

    while (end < length)
    {
        if (sentence[end] == ' ')
        {
            reverse_util(sentence, start, end - 1);
            start = end + 1;
        }
        end++;
    }

    reverse_util(sentence, start, length - 1);
    return sentence;
}
int main()
{
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    // Remove trailing newline character (\n) added by fgets
    sentence[strcspn(sentence, "\n")] = '\0';
    printf("%s\n", reverse(sentence));
    return 0;
}