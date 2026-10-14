def largest_in_array(arr):
    return max(arr)


if __name__ == "__main__":
    n = int(input("Enter no of elements: "))
    arr = []  # Empty List
    print("Enter Value")

    for i in range(n):
        arr.append(int(input()))

    print("Largest: ", largest_in_array(arr))
