#include <stdio.h>
#include <string.h>

// 1. Look-ahead: compare each character with the next to find run boundaries.
char *run_length_encoding(const char str[])
{
    int count = 1;
    static char res[200];
    int k = 0;
    res[0] = '\0';

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (str[i] == str[i + 1])
            count++;
        else
        {
            k += snprintf(res + k, sizeof(res) - (size_t)k, "%c%d", str[i], count);
            count = 1;
        }
    }
    return res;
}

// 2. Run-boundary tracking: start marks the run's first character; i scans forward.
char *run_length_encoding_(const char str[])
{
    int start = 0;
    static char res[200];
    int k = 0;
    res[0] = '\0';

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (str[i + 1] == '\0' || str[i + 1] == '\n' || str[i] != str[i + 1])
        {
            int count = i - start + 1;
            k += snprintf(res + k, sizeof(res) - (size_t)k, "%c%d", str[i], count);
            start = i + 1;
        }
    }
    return res;
}

int main()
{
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    printf("%s\n", run_length_encoding(str));
    printf("%s\n", run_length_encoding_(str));
    return 0;
}