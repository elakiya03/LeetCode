const singleNumber = (nums) => {
    let ans = 0

    for (num of nums) {
        ans ^= num
    }

    return ans
}

nums = [1, 2, 3, 2, 3]
console.log(singleNumber(nums))