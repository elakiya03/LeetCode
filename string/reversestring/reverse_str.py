def reversestr_twopointer(s: str) -> str:
    left = 0
    right = len(s) - 1

    s = list(s)  # Convert string to a list for mutability

    while left < right:
        s[left], s[right] = s[right], s[left]
        left += 1
        right -= 1

    return "".join(s)


def reversestr_stack(s: str) -> str:
    stack = []

    for c in s:
        stack.append(c)

    res = []
    while len(stack) > 0:
        res.append(stack.pop())

    return "".join(res)


def reversestr(s):
    return s[::-1] ## Reverse the string using slicing


if __name__ == "__main__":
    sentence = input("Enter a sentence: ")
    print(reversestr_twopointer(sentence))
    print(reversestr_stack(sentence))
    print(reversestr(sentence))
