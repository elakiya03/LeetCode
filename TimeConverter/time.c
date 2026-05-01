/*
 * Program: Time Converter
 * Description: Reads total seconds and converts them to hours, minutes, and seconds.
 */

#include <stdio.h>

int main()
{
    int time;
    printf("Enter total seconds: ");
    scanf("%d", &time);

    printf("%dh %dm %ds\n", time / 3600, (time / 60) % 60, time % 60);
    return 0;
}
