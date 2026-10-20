const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

const noOfWords = (text) => {
  text = text.split(" ");
  return text.length;
};

rl.question("Enter a sentence: ", (text) => {
  console.log(`Words: ${noOfWords(text)}`);
  rl.close();
});
