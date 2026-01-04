func containsDuplicate(nums []int) bool {
    mp := make(map[int]int)
    for _, num := range nums {
        _ , ok := mp[num]
        if ok {
            return true
        } else {
            mp[num] = 1
        }
    }
    return false
}
