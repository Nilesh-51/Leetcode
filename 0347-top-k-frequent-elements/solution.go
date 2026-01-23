func topKFrequent(nums []int, k int) []int {
    mp := make(map[int]int)
    arr := make([][]int,len(nums)+1)
    for _, num:= range nums{
        mp[num]++
    }

    for num, freq := range mp {
        arr[freq] = append(arr[freq],num)
    }

    result := []int{}
    for i:=len(arr)-1; i>0; i-- {
        for _, num := range arr[i] {
            result = append(result, num)
            if len(result)==k {
                return result
            }
        }
    }
    return result
}
