

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int i,j;
    int n,m;
    n=matrixSize;
    m=*matrixColSize;
    for(i=0;i<n;i++){
        if(matrix[i][m-1]>=target){
            for(j=0;j<m;j++){
                if(matrix[i][j]==target)
                    return true;
            }
        }
    }
    return false;
}
