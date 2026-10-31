from typing import List


def singleNumber(nums: List[int]) -> int:
    res = 0

    for num in nums:
        res ^= num
    return res


if __name__ == "__main__":
    n = int(input("Enter no of elements:"))
    nums = []  # list

    # for i in range(n):
    #     temp = int(input())
    #     nums.append(temp)

    # nums = [int(input()) for _ in range(n)]  # list comprehension

    nums = list(map(int, input("Enter numbers separated by space: ").split()))

    res = singleNumber(nums)
    print("Unique Number: " + res)
