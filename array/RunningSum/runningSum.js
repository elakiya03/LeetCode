// Node.js uses readline to receive input one line at a time.
const readline = require("readline");

function runningSum(numbers) {
  const sums = [];
  let total = 0;

  for (const number of numbers) {
    total += number;
    sums.push(total);
  }

  return sums;
}

// Connect terminal input and output to readline.
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let n;
const numbers = [];

process.stdout.write("Enter no of elements: ");

// This callback runs each time the user enters a line.
rl.on("line", (line) => {
  // The first line is the number of values to read.
  if (n === undefined) {
    n = Number(line);
    console.log(`Enter ${n} values:`);
    return;
  }

  // Every later line contains one array value.
  numbers.push(Number(line));

  // Once all n values are read, calculate the sums and stop reading input.
  if (numbers.length === n) {
    console.log("Running sum:", ...runningSum(numbers));
    rl.close();
  }
});
