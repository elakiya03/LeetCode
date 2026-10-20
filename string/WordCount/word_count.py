def no_of_words(s: str) -> int:
    count = 0
    s = s.split()  # convert a single string into an array (list) of strings
    for _ in s:
        count += 1
    return count


# def function(str):
#   return len(s.split())


if __name__ == "__main__":
    s = input("Enter a sentence: ")
    print(f"Words:  {no_of_words(s)}")
