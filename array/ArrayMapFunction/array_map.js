function doubleAll(arr) {
  for (let i = 0; i < arr.length; i++) {
    arr[i] = arr[i] * 2;
  }
}

let arr = new Array(1, 2, 4);

doubleAll(arr);
console.log(arr);
