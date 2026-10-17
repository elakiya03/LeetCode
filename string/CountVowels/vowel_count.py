def vowel_count(sentence: str):
    count = 0
    for ch in sentence:
        ch = ch.lower()
        if ch == "a" or ch == "e" or ch == "i" or ch == "o" or ch == "u":
            count += 1
    return count


if __name__ == "__main__":
    sentence = input("Enter a sentence: ")
    print("Vowels Count: ", vowel_count(sentence))
