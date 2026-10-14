function longestStreak(arr) {
  let maxStreak = 1;
  let streak = 1;

  for (let i = 1; i < arr.length; i++) {
    if (arr[i - 1] == arr[i]) {
      streak++;
      if (maxStreak < streak) maxStreak = streak;
      else streak = 1;
    }
  }
  return maxStreak;
}

let arr = [1, 2, 3, 3, 3];
console.log("Longest Streak:", longestStreak(arr));
