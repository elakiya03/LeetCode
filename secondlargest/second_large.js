const readline = require("readline");

function secondLargest(arr) {
  let max = (sec = arr[0]);

  for (const x of arr) {
    if (x > max) {
      sec = max;
      max = x;
    }
    else if (x!=max && x>sec){
        sec=x
    }
  }
  return sec
}
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let n;
const arr = [];

process.stdout.write("Enter no of elements: ");

rl.on("line", (line) => {
  if (n === undefined) {
    n = Number(line);
    console.log(`Enter ${n} elements`);
    return;
  }

  arr.push(Number(line));
  if (arr.length === n) {
    console.log("Second Largest: ", secondLargest(arr));
    rl.close();
  }
});
