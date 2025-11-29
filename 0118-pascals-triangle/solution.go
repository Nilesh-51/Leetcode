func generate(numRows int) [][]int {
    var result [][]int
    result = append(result, []int{1})
    if numRows==1 {
        return result
    }
    result = append(result, []int{1,1})
    for i:=2; i<numRows; i++ {
            var rowResult []int
        for j:=0; j<=i; j++ {
            if j==0 || j==i {
                rowResult = append(rowResult, 1)
            } else {
                rowResult = append(rowResult, result[i-1][j]+result[i-1][j-1])
            }
        }
        result = append(result, rowResult)
    }
    return result
}
