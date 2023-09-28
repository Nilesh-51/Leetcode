class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size(),vector<int>(amount+1,-1));
        int res=fRecursion(coins.size()-1,amount,coins,dp);
        return res==1e9?-1:res;
    }
    int fRecursion(int ind, int sum, vector<int> &coins,vector<vector<int>> &dp){
        if(ind==0){
            if(sum%coins[0]==0)   return sum/coins[0];
            return 1e9;
        }
        if(dp[ind][sum]!=-1)return dp[ind][sum];
        int notTake=0+fRecursion(ind-1,sum,coins,dp);
        int take=INT_MAX;
        if(coins[ind]<=sum){
            take=1+fRecursion(ind,sum-coins[ind],coins,dp);
        }
        return dp[ind][sum]=min(take,notTake);
    }

};
