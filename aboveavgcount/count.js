function countingAboveAverage(arr) {
  let count = 0;
  const avg = arr.reduce((a, b) => a + b, 0) / arr.length;
  console.log("Average: ", avg);
  for (const i of arr) {
    if (i > avg) count++;
  }

  return count;
}

let arr = new Array(1, 2, 3, 4, 5);
console.log("No of elements above average", countingAboveAverage(arr));
