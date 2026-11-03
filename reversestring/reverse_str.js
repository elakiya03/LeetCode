const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

// 1. Backward Loop
const reverseUsingLoop = (s) => {
  let res = []; // Array
  for (let i = s.length - 1; i >= 0; i--) {
    res.push(s[i]);
  }
  return res.join("");
};

// 2. Built in Reverse
const reverseStr = (s) => {
  let rev = s.split("").reverse().join("");
  return rev;
};

//3. Two pointer
function reverseTwoPointer(sentence) {
  let left = 0,
    right = sentence.length - 1;

  let charArray = sentence.split(""); // Why creating a new variable? JS strings are immutable. Assignment can't change a string characters. Converting string into mutable array of Characters and
  while (left < right) {
    [charArray[left], charArray[right]] = [charArray[right], charArray[left]];
    left++;
    right--;
  }
  return charArray.join(""); // Join the Characters array back into a string
}

//4. Stack
const reverseUsingStack = (sentence) => {
  let stack = [];

  for (let i = 0; i < sentence.length; i++) {
    stack.push(sentence[i]);
  }

  let res = "";
  while (stack.length > 0) {
    res += stack.pop();
  }
  return res;
};

rl.question("Enter a sentence: ", (sentence) => {
  console.log(reverseStr(sentence));
  console.log(reverseUsingLoop(sentence));
  console.log(reverseTwoPointer(sentence));
  console.log(reverseUsingStack(sentence));
  rl.close();
});
