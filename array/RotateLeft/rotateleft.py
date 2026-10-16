def reverse(arr, left, right):  # two pointer

    while left < right:
        arr[left], arr[right] = arr[right], arr[left]
        left += 1
        right -= 1

def rotateleftbyk(arr, k):
    n = len(arr)
    k %= n

    reverse(arr, 0, k - 1)
    reverse(arr, k, n - 1)
    reverse(arr, 0, n - 1)


if __name__ == "__main__":
    n = int(input("Enter no of elements: "))
    arr = []

    print("Enter ", n, " elements")
    for i in range(n):
        arr.append(int(input()))
    k = int(input("Enter k: "))

    rotateleftbyk(arr, k)
    print(arr)
