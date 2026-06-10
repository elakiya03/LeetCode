const reverseStr = (s) => {
    let rev = s.split('').reverse().join('')
    return rev == s
}

let s1 = "madam"
console.log(reverseStr(s1) ? "Yes, Palindrome" : "No, its not")

let s2 = "silent"
console.log(reverseStr(s2) ? "Yes, Palindrome" : "No, its not")