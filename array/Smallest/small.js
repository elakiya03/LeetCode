const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter 3 numbers: ", (line) => {
  const [a, b, c] = line.trim().split(/\s+/).map(Number);

  const small = a < b ? (a < c ? a : c) : b < c ? b : c;

  console.log(`Smallest: ${small}`);
  rl.close();
});
