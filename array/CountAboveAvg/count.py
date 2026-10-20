import statistics


def counting_above_average(arr):
    avg = statistics.mean(arr)
    print("Average: ", avg)

    count = 0
    for i in range(len(arr)):
        if arr[i] > avg:
            count = count + 1
    return count


if __name__ == "__main__":
    n = int(input("Enter no of elements: "))
    arr = []  # Empty List
    print("Enter Value")

    for i in range(n):
        arr.append(int(input()))

    print("Result:", counting_above_average(arr))
