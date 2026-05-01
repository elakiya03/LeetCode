/*
 * Program: Time Converter (C++)
 * Description: Reads total seconds and converts them to hours, minutes, and seconds.
 */

#include <iostream>
using namespace std;

int main()
{
    int time;
    cout << "Enter total seconds " << endl;
    cin >> time;

    cout << time / 3600 << "h " << (time / 60) % 60 << "m " << time % 60 << "s" << endl;
    return 0;
}