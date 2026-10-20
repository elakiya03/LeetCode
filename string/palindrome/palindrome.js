const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

const isPalindrome = (s) => {
  let rev = s.split("").reverse().join(""); // Split the string into Character
  return rev === s;
};

rl.question("Enter a word: ", (word) => {
  console.log(
    isPalindrome(word.toLowerCase()) ? "Yes, Palindrome" : "No, its not",
  );
  rl.close();
});
