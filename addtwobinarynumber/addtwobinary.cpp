
#include <iostream>
using namespace std;

string addBinary(string a, string b)
{
    string result = "";
    int i = a.length() - 1;
    int j = b.length() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry;

        if (i >= 0)
            sum += a[i--] - '0';
        if (j >= 0)
            sum += b[j--] - '0';

        result += (sum % 2) + '0'; // current bit
        carry = sum / 2;           // carry
    }

    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string x, y;
    cin >> x >> y;

    cout << addBinary(x, y);
}



// string addBinary(string numA, string numB)
//  {

//     int a = stoi(numA, nullptr, 2);  //32bit
//     int b = stoi(numB, nullptr, 2);

//     while (b != 0)
//     {
//         int sum = (a ^ b);        // XOR: add without carry
//         int carry = (a & b) << 1; // AND + shift: compute carry
//         a = sum;
//         b = carry;
//     }

//     if (a == 0)
//         return "0";

//     string res="";
//     while (a > 0)
//     {
//         res += (char)('0' + (a & 1)); // last bit
//         a >>= 1;                    // shift right
//     }

//     reverse(res.begin(), res.end());
//     return res;
// }
// int main()

// {
//     string x;
//     getline(cin, x);

//     string y;
//     getline(cin, y);

//     cout << addBinary(x, y) << endl;
//     return 0;
// }
