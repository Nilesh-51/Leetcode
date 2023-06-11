class Solution {
public:
    int uniquePaths(int m, int n) {
        return comb(m+n-2,m-1);
    }
    
    
    int comb(int n,int r){
    double ans=1;
    for(int i=1;i<=r;i++){
        ans*=(n-r+i)/(double)(i);
        }
        if(ans>(int)ans+0.5)
        ans=ceil(ans);
    return ans;
    }
};
