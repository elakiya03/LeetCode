let twoSum = function (nums, target) {
    const map = new Map()

    for (let i = 0; i < nums.length; i++) {
        let res = target - nums[i]
        if (map.has(res)) {
            return [map.get(res), i]
        }
        map.set(nums[i], i)
    }
}

let nums = [3, 2, 4]
let target = 6
console.log(twoSum(nums, target))