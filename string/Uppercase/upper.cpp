/*
 * Program: String to Uppercase Converter (C++)
 * Description: Reads a string and converts all characters to uppercase.
 * Also displays the length of the string.
 */

#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter a your name: " << std::endl;
    getline(std::cin, name);

    for (char &c : name)
    {
        c = toupper(c);
    }

    std::cout << name << std::endl;
    std::cout << "Length: " << name.length() << std::endl;
    return 0;
}