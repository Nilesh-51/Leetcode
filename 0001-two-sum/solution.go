func twoSum(nums []int, target int) []int {
    var result []int
    mp := make(map[int]int)
    for i:=0; i<len(nums); i++ {
        more := target - nums[i]
        _, ok:= mp[more]
        if ok {
            result = append(result, i, mp[more])
            return result
        }
        mp[nums[i]]=i
    }
    return result
}
