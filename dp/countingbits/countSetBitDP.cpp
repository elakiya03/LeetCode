#include <iostream>
using namespace std;

vector<int> countBits(int n)
{
    vector<int> dp(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        dp[i] = dp[i / 2] + (i % 2);
    }

    return dp;
}

vector<int> countBits2(int n)
{
    vector<int> dp(n + 1, 0);

    for (int i = 1; i < n; i++)
    {
        dp[i] = dp[i >> 2] + (i & 1);
    }
    return dp;
}

// (i & 1)
// even - it will be zero
// odd - last bit is one

int main()
{
    int n;
    cin >> n;

    auto v = countBits(n);

    for (int i = 0; i <= n; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}