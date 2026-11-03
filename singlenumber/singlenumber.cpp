// All elements appear twice except one. Find it.
// Brute force: O(n) space with hash map
// XOR trick: O(1) space

#include <iostream>
#include <utility>
using namespace std;

int singleNumber(std::vector<int> &nums)
{
    int result = 0;
    for (int n : nums)
        result ^= n; // XOR everything together
    return result;
}

// ─────────────────────────────────────────
//  18. FIND two unique elements
//      (all others appear exactly twice)
// ─────────────────────────────────────────
pair<int, int> findTwoUnique(vector<int> &nums)
{
    // Step 1: XOR everything → get a^b
    int xorAll = 0;
    for (int num : nums)
        xorAll ^= num;

    // Step 2: find a bit where a and b DIFFER
    // any set bit in xorAll works — use rightmost for simplicity
    int diffBit = xorAll & (-xorAll);

    // Step 3: partition numbers into two groups:
    //   group A: has diffBit set
    //   group B: does not have diffBit set
    // a is in one group, b in the other
    // pairs cancel within each group → each group XORs to its unique
    int a = 0, b = 0;
    for (int num : nums)
    {
        if (num & diffBit)
            a ^= num; // goes into group A
        else
            b ^= num; // goes into group B
    }
    // Time: O(n), Space: O(1)
    return {a, b};
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> v[i];
    }

    std::cout << singleNumber(v) << std::endl;
    return 0;
}

// nums = [4, 1, 2, 1, 2]
// 0 ^ 4 = 4
// 4 ^ 1 = 5
// 5 ^ 2 = 7
// 7 ^ 1 = 6  (1^1=0, so 4^2 effectively)
// 6 ^ 2 = 4  (2^2=0, leaving just 4)
// Answer: 4

// WHY it works:
// n ^ n = 0  for every pair
// 0 ^ x = x  leaves the lone element
// Order doesn't matter — XOR is commutative

// Time: O(n), Space: O(1)