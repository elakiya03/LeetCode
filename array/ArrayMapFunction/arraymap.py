def double_all(arr):
    for i in range(len(arr)):
        arr[i] = arr[i] * 2


if __name__ == "__main__":
    n = int(input("Enter no of Elements: "))
    arr = []
    print("Enter Value")

    # Loop to enter elements in the array
    for i in range(n):
        arr.append(int(input()))

    double_all(arr)
    print("Result:" ,arr)
