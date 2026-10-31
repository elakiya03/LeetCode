from typing import List


def twoSum(nums: List[int], target: int) -> List[int]:
    map = {}  # dictionary

    for i in range(len(nums)):
        res = target - nums[i]
        if res in map:
            return [map[res], i]
        map[nums[i]] = i
    return []


if __name__ == "__main__":
    n = int(input("Enter no of elements:"))
    print("Enter n elemets\n")
    nums = []

    for i in range(n):
        temp = int(input())
        nums.append(temp)
        

    target = int(input("Enter target:"))
    res = twoSum(nums, target)
    print(res)
