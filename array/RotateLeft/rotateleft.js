function reverse(arr, left, right) {
  while (left < right) {
    [arr[left], arr[right]] = [arr[right], arr[left]];
    left += 1;
    right -= 1;
  }
}

function rotateLeftByK(arr, k) {
  let n = arr.length;
  k %= n;

  reverse(arr, 0, k - 1);
  reverse(arr, k, n - 1);
  reverse(arr, 0, n - 1);
}

let arr = [1, 2, 3, 4, 5];
let k = 3;
rotateLeftByK(arr, k);
console.log(arr);
