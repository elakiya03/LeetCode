def longest_streak(arr):
    max_streak = 1
    streak = 1

    for i in range(1, n):
        if arr[i - 1] == arr[i]:
            streak = streak + 1
            if streak > max_streak:
                maxstreak = streak
            else:
                streak = 1
    return max_streak


if __name__ == "__main__":
    n = int(input("Enter no of elements: "))
    arr = []
    print("Enter ", n, " values")

    for i in range(n):
        arr.append(int(input()))

    print("Longest Streak: ", longest_streak(arr))
