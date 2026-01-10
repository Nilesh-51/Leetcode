func twoSum(nums []int, target int) []int {
    mp := make(map[int]int)
    var result []int
    for i, num := range nums {
        key := target-num
        if val, ok := mp[key]; ok {
            result = append(result, val)
            result = append(result, i)
            return result
        } else {
            mp[num] = i
        }
    }
    return result
}
