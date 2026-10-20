def remove_duplicates(arr):
    seen = set()  # using hash set
    for x in arr:
        if x not in seen:
            seen.add(x)
    print(seen)


if __name__ == "__main__":
    n = int(input("Enter no of elements: "))
    arr = []
    print("Enter ", n, " elements")
    for i in range(n):
        arr.append(int(input()))
    remove_duplicates(arr)
