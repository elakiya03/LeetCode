// Function to remove adjacent duplicates using a stack
function removeDuplicates(s) {
  let n = s.length;
  let st = []; //stack

  for (let i = 0; i < n; i++) {
    // If stack is empty or current char is not equal to top of stack, push it
    if (st.length === 0 || s.at(i - 1) !== s.at(i)) {
      st.push(s[i]);
    }
    // If current char is same as top of stack, skip adding it
  }

  return st.join("");
}
let s = "aabbbbbcccccddddd";
console.log(removeDuplicates(s));
