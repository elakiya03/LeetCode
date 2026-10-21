def reverse(s):
    return " ".join(reversed(s.split()))


def reverse_stack(s):
    stack = []
    words = s.split()

    while len(words) > 0:
        stack.append(words.pop())
    return " ".join(stack)


def reverse_twopointer(s):
    words = s.split()
    left = 0
    right = len(words) - 1

    while left < right:
        words[left], words[right] = words[right], words[left]
        left += 1
        right -= 1

    return " ".join(words)


if __name__ == "__main__":
    sentence = input("Enter a sentence: ")
    print(reverse(sentence))
    print(reverse_stack(sentence))
    print(reverse_twopointer(sentence))
