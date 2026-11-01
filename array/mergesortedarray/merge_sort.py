def merge_two_sorted_array(arr1, arr2):
    n1 = len(arr1)
    n2 = len(arr2)
    i = j = k = 0

    temp = []

    while i < n1 and j < n2:
        if arr1[i] < arr2[j]:
            temp.append(arr1[i])
            k = k + 1
            i = i + 1
        else:
            temp.append(arr2[j])
            k = k + 1
            j = j + 1

    while i < n1:
        temp.append(arr1[i])
        k = k + 1
        i = i + 1

    while j < n2:
        temp.append(arr2[j])
        k = k + 1
        j = j + 1


    print(temp)


if __name__ == "__main__":
    n1 = int(input("Enter n1: "))
    print("Enter", n1, "values")
    arr1 = []
    for i in range(n1):
        arr1.append(int(input()))

    n2 = int(input("Enter n2: "))
    print("Enter", n2, "values")
    arr2 = []
    for i in range(n1):
        arr2.append(int(input()))

    merge_two_sorted_array(arr1, arr2)
