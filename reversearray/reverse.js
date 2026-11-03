function reverseArrayUsingTwoPointer(arr) {
  let left = 0;
  let right = arr.length - 1;

  while (left < right) {
    [arr[left], arr[right]] = [arr[right], arr[left]];
    left++;
    right--;
  }
  console.log(arr);
}

function reverseArrayUsingSinglePointer(arr) {
  let n = arr.length;

  for (let i = 0; i < Math.floor(n / 2); i++) { // Half 
    [arr[i], arr[n - i - 1]] = [arr[n - i - 1], arr[i]];
  }
  console.log(arr);
}

function reverseArray(arr) {
  arr.reverse();
  console.log(arr);
}

let arr = [1, 2, 3, 4, 5];

reverseArrayUsingTwoPointer([...arr]);
reverseArrayUsingSinglePointer([...arr]);
reverseArray([...arr]);
