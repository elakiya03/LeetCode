def longest_word(text: str) -> str:
    words = text.split()
    word = ""

    # word = max(text.split(),key=len)
    
    for w in words:
        if len(w) > len(word):
            word = w
    return word


if __name__ == "__main__":
    text = input("Enter a sentence: ")
    print(f"Longest word: {longest_word(text)}")
