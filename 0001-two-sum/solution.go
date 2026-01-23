func twoSum(nums []int, target int) []int {
    mp:= make(map[int]int)
    var res []int
    for i, num := range nums {
        if _,ok:=mp[target-num];ok {
            res=append(res,i)
            res=append(res,mp[target-num])
            return res
        } else {
            mp[num]=i
        }
    }
    return res
}
