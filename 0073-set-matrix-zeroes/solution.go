func setZeroes(matrix [][]int)  {
    m := len(matrix)
    n := len(matrix[0])
    row := 1
    for i:=0; i<m; i++ {
        for j:=0; j<n; j++ {
            if matrix[i][j] == 0 {
                matrix[i][0]=0
                if j==0 {
                    row=0
                }else{
                    matrix[0][j]=0
                }
            }
        }
    }
    for i:=1; i<m; i++ {
        for j:=1; j<n; j++ {
            if  matrix[i][0]==0 || matrix[0][j]==0 {
                matrix[i][j] = 0
            }
        }
    }
    if matrix[0][0]==0 {
        for i:=0; i<n; i++{
            matrix[0][i]=0
        }
    }
    if row==0 {
        for i:=0; i<m; i++ {
            matrix[i][0]=0
        }
    }
    
}
