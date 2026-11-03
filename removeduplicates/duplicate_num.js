function removeDuplicates(arr) {
  const result = [...new Set(arr)];
  console.log(result);
}

function removeDuplicatesUsingSet(arr) {
  const seen = new Set();

  for (const x of arr) {
    if (!seen.has(x)) {
      seen.add(x);
    }
  }
  const result = [...seen]; // Spread operator
  console.log(result);
}

function removeDuplicatesUsingMap(arr) {
  const seen = new Map();

  for (const x of arr) {
    if (!seen.has(x)) seen.set(x, true);
  }
  // console.log(seen);
  const result = [...seen.keys()]; // Spread operator
  console.log(result);
}

let arr = [2, 1, 1, 2, 1, 4, 2, 2, 1, 3, 4];
removeDuplicates(arr);
removeDuplicatesUsingSet(arr);
removeDuplicatesUsingMap(arr);
