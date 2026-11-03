#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
    long long rev = 0;
    int cpy = x;
    if (x < 0)
        return false;

    while (x > 0)
    {
        int digit = x % 10;
        rev = rev * 10 + digit;
        x /= 10;
    }

    return rev == cpy ? true : false;
}
int main()
{
    printf("Enter n:");
    int n;
    scanf("%d", &n);
    printf("%s", isPalindrome(n) ? "true" : "false");
    return 0;
}