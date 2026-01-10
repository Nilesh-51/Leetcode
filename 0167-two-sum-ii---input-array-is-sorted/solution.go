func twoSum(numbers []int, target int) []int {
    result:=[]int{}
    i , j := 0, len(numbers)-1
    for i<j {
        if numbers[i] + numbers[j] > target {
            j--
        } else if numbers[i] + numbers[j] < target {
            i++
        } else {
            result = append(result, i+1)
            result = append(result, j+1)
            break
        }
    }
    return result
}
