const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter a sentence: ", (text) => {
  console.log(runLengthEncoding(text));
  rl.close();
});

function runLengthEncoding(text) {
  let res = "";
  let count = 1;

  for (let i = 0; i < text.length; i++) {
    if (i < text.length - 1 && text[i] == text[i + 1]) count++;
    else {
      res += text[i];
      res += count.toString();
      count = 1;
    }
  }
  return res;
}
