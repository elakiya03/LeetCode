# Function to remove adjacent duplicates using sliding window
def remove_duplicates(s):
    i = 0
    n = len(s)
    result = []  # empty list

    # Traverse through the string using a sliding window
    while i < n:
        # Add current character
        result.append(s[i])

        # Skip all consecutive duplicates
        while i + 1 < n and s[i] == s[i + 1]:
            i += 1
        i += 1

    return "".join(
        result
    )  # .join(result) combines all the elements in result to empty string(separator is empty).


if __name__ == "__main__":
    s = input("Enter a string: ")
    print(remove_duplicates(s))
