const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

// 1. Built in Reverse
const reverseStr = (s) => {
  let rev = s.split(" ").reverse().join(" ");
  return rev;
};

//2. Stack
const reverseUsingStack = (sentence) => {
  const stack = sentence.split(" ");
  const reversedWords = [];

  while (stack.length > 0) {
    reversedWords.push(stack.pop());
  }
  return reversedWords.join(" ");
};

//3. Two pointer
const reverseTwoPointer = (sentence) => {
  const words = sentence.split(" ");
  let left = 0;
  let right = words.length - 1;

  while (left < right) {
    [words[left], words[right]] = [words[right], words[left]];
    left++;
    right--;
  }

  return words.join(" ");
};

rl.question("Enter a sentence: ", (sentence) => {
  console.log(reverseStr(sentence));
  console.log(reverseTwoPointer(sentence));
  console.log(reverseUsingStack(sentence));
  rl.close();
});
