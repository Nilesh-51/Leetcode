class Solution {
public:

    int func(int n,vector<int> &dp){
        if(n==0){
            dp[0]=0;
           return 0; 
        }
        else if(n==1){
            return 1; 
            dp[1]=1;
        }
       else if(n==2){
        dp[2]=2;
        return 2;
        }
        if(dp[n-1]==-1)
        dp[n-1]=func(n-1,dp);
        if(dp[n-2]==-1)
        dp[n-2]=func(n-2,dp);
        return dp[n-1]+dp[n-2];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        if(n>1)
        dp[2]=2;
        for(int i=3;i<n+1;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};
