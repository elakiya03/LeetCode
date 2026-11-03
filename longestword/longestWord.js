const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

//1. Using Split
function longestWord(text) {
  let words = text.split(" ");
  let word = "";

  for (const w of words) {
    if (w.length > word.length) {
      word = w;
    }
  }
  return word;
}

//2. Using Reduce
const longestWordUsingReduce = (text) => {
  return text
    .split(" ")
    .reduce((curr, long) => (curr.length > long.length ? curr : long), "");
};

rl.question("Enter a sentence: ", (text) => {
  console.log(`Longest Word: ${longestWord(text)}`);
  console.log(`Longest Word: ${longestWordUsingReduce(text)}`);
  rl.close();
});
