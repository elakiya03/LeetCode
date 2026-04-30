/*
 * Program: Username & Initials Generator
 * Description: Reads first and last names, creates a lowercase username by concatenating
 *              them, and displays initials in uppercase.
 * Example: Input "John" "Doe" → Username: johndoe, Initials: JD
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h> //toupper tolower - works on single char
int main()
{
    char firstname[50];
    char lastname[50];

    printf("Enter your Firstname: ");
    scanf("%s", firstname);

    printf("Enter your Lastname: ");
    scanf("%s", lastname);

    char username[100];
    strcpy(username, firstname);
    strcat(username, lastname);

    for (int i = 0; username[i]; i++)
    {
        username[i] = tolower(username[i]);
    }
    char initials[3];
    initials[0] = toupper(firstname[0]);
    initials[1] = toupper(lastname[0]);

    printf("Username: %s\n", username);
    printf("Initials: %s\n", initials);
    return 0;
}