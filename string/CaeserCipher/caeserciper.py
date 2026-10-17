def encryption(text, shift) -> str:
    encrpt = []
    for c in text:
        lower_c = c.lower()
        if "a" <= lower_c <= "z":
            encrpt.append(chr((ord(lower_c) - ord("a") + shift) % 26 + ord("a")))

    return "".join(encrpt)


if __name__ == "__main__":
    text = input("Enter text: ")
    shift = int(input("Enter shift value: "))

    print("Encryption:", encryption(text, shift))

