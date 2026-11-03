def is_palindrome_reverse(word: str) -> bool:
    normalized_word = word.lower()
    return normalized_word == normalized_word[::-1]


def is_palindrome_twopointer(word: str) -> bool:
    left = 0
    right = len(word) - 1

    while left < right:
        if word[left].lower() != word[right].lower():
            return False
        left += 1
        right -= 1
    return True


def is_palindrome(word):
    word = word.lower()
    for i in range(len(word) // 2):
        if word[i] != word[len(word) - i - 1]:
            return False
        return True


if __name__ == "__main__":
    word = input("Enter a word: ")
    print("Palindrome" if is_palindrome(word) else "Not Palindrome")
    print("Palindrome" if is_palindrome_twopointer(word) else "Not Palindrome")
    print("Palindrome" if is_palindrome_reverse(word) else "Not Palindrome")
