function largestInArray(arr) {
  return arr.reduce((max, i) => Math.max(max, i), arr[0]);
}

let arr = [36, 89, 23, 10, 1];
console.log("Largest: ", largestInArray(arr));
