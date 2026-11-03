def isPalindrome(x: int) -> bool:
    if x < 0:
        return False
    rev = 0
    cpy = x
    while x > 0:
        digit = x % 10
        rev = rev * 10 + digit
        x //= 10
    return rev == cpy


if __name__ == "__main__":
    n = int(input("enter a number:"))
    print(isPalindrome(n))
