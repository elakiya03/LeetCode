#include <iostream>

std::string isPowerOf2(int n)
{
    return (n > 0 && (n & n - 1) == 0) ? "Yees" : "No";
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << isPowerOf2(n) << std::endl;
    return 0;
}