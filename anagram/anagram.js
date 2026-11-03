const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

const isAnagramFreq = (s1, s2) => {
  if (s1.length !== s2.length) return false;

  let count = new Array(26).fill(0);

  for (let i = 0; i < s1.length; i++) {
    count[s1[i].charCodeAt(0) - "a".charCodeAt(0)]++;
    count[s2[i].charCodeAt(0) - "a".charCodeAt(0)]--;
  }

  for (let i = 0; i < 26; i++) {
    if (count[i] != 0) return false;
  }
  return true;
};

const isAnagramSort = (s1, s2) => {
  if (s1.length !== s2.length) return false;

  s1 = s1.split("").sort().join("");
  s2 = s2.split("").sort().join("");

  return s1 === s2;
};

const isAnagramHash = (s1, s2) => {
  if (s1.length !== s2.length) return false;

  const counts = new Map();

  for (const ch of s1) {
    counts.set(ch, (counts.get(ch) || 0) + 1);
  }

  for (const ch of s2) {
    counts.set(ch, (counts.get(ch) || 0) - 1);
  }

  for (const count of counts.values()) {
    if (count !== 0) {
      return false;
    }
  }

  return true;
};

rl.question("Enter String 1: ", (s1) => {
  rl.question("Enter string 2: ", (s2) => {
    console.log(isAnagramFreq(s1, s2) ? "Yes" : "No");
    console.log(isAnagramSort(s1, s2) ? "Yes" : "No");
    console.log(isAnagramHash(s1, s2) ? "Yes" : "No");
    rl.close();
  });
});
