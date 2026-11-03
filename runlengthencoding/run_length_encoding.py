def run_length_encoding(s):
    res = ""
    count = 1

    for i in range(len(s)):
        if i < len(s) -1 and s[i] == s[i + 1]:
            count += 1
        else:
            res += s[i]
            res += str(count)
            count = 1
    return res


if __name__ == "__main__":
    s = input("Enter a sentence: ")
    print(run_length_encoding(s))
