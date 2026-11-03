const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

const vowelCount = (sentence) => {
  let count = 0;

  for (let ch of sentence) {
    ch = ch.toLowerCase();
    if (ch === "a" || ch === "e" || ch === "i" || ch === "o" || ch === "u")
      count++;
  }
  return count;
};

rl.question("Enter a sentences: ", (text) => {
  console.log("Vowels Count: ", vowelCount(text));
  rl.close();
});
