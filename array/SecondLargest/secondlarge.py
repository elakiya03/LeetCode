def second_largest(arr):
    max = sec = arr[0]

    for x in arr:
        if x > max:
            sec = max
            max = x
        elif x != max and x > sec:
            sec = x
    return sec


if __name__ == "__main__":
    n = int(input("Enter no of elements: "))
    print(f"Enter {n} values:")

    numbers = []
    for _ in range(n):
        numbers.append(int(input()))

    print("Second Largest", second_largest(numbers))
