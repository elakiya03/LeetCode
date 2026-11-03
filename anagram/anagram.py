def is_anagram_freq(s1, s2) -> bool:
    if len(s1) != len(s2):
        return False

    freq = [0] * 26

    for i in s1:
        freq[ord(i) - ord("a")] += 1

    for i in s2:
        freq[ord(i) - ord("a")] -= 1

    for c in freq:
        if c != 0:
            return False
    return True


def is_anagram_sort(s1, s2) -> bool:
    if len(s1) != len(s2):
        return False

    s1 = sorted(s1)
    s2 = sorted(s2)

    return s1 == s2


def is_anagram_hash(s1, s2) -> bool:
    if len(s1) != len(s2):
        return False

    dict = {}

    for ch in s1:
        dict[ch] = dict.get(ch, 0) + 1

    for ch in s2:
        dict[ch] = dict.get(ch, 0) - 1

    for ch in dict.values():
        if ch != 0:
            return False
    return True


if __name__ == "__main__":
    s1 = input("Enter String 1: ")
    s2 = input("Enter String 2: ")

    print("Yes" if is_anagram_freq(s1, s2) else "No")
    print("Yes" if is_anagram_sort(s1, s2) else "No")
    print("Yes" if is_anagram_hash(s1, s2) else "No")
