def revesearrayusingtwopointer(arr):  # two pointer
    left = 0
    right = len(arr) - 1
    while left < right:
        arr[left], arr[right] = arr[right], arr[left]
        left += 1
        right -= 1
    print(arr)


def reversearrayusingsingle(arr):  # single pointer
    n = len(arr)
    for i in range(len(arr) // 2):
        arr[i], arr[n - i - 1] = arr[n - i - 1], arr[i]
    print(arr)


def reversearray(arr):  # inbuilt
    arr.reverse()
    print(arr)


if __name__ == "__main__":
    n = int(input("Enter no of elements: "))
    arr = []
    print("Enter ", n, " elements")
    for i in range(n):
        arr.append(int(input()))

    revesearrayusingtwopointer(arr.copy())
    reversearrayusingsingle(arr.copy())
    reversearray(arr.copy())
