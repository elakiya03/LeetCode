def running_sum(numbers):
    sums = []
    total = 0

    for number in numbers:
        total += number
        sums.append(total)

    return sums


if __name__ == "__main__":
    n = int(input("Enter no of elements: "))
    print(f"Enter {n} values:")

    numbers = []
    for _ in range(n):
        numbers.append(int(input()))

    sums = running_sum(numbers)
    print("Running sum:", *sums)  # Unpack the list so its values print separately.
