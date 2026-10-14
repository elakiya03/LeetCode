function mergeSort(arr1, arr2) {
  let n1 = arr1.length;
  let n2 = arr2.length;
  let i = 0,
    j = 0,
    k = 0;

  let temp = [];

  while (i < n1 && j < n2) {
    if (arr1[i] < arr2[j]) {
      temp[k++] = arr1[i++];
    } else {
      temp[k++] = arr2[j++];
    }
  }

  while (i < n1) {
    temp[k++] = arr1[i++];
  }

  while (j < n2) {
    temp[k++] = arr2[j++];
  }

  //   for (const value of temp) {
  //     console.log(value, " ");
  //   }

  console.log(temp);
}

let arr1 = [1, 4, 7];
let arr2 = [2, 3, 5];
mergeSort(arr1, arr2);
