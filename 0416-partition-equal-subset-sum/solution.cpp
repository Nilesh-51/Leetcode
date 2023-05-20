class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0)return false;
        int k=sum/2;
        return subsetSumToK(nums.size(),k,nums);
    }
    bool subsetSumToK(int n, int k, vector<int> &arr) {
    bool dp[n][k*2+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<=k;j++){
            if(j==0)
            dp[i][j]=true;
            else
            dp[i][j]=0;
        }
    }
    dp[0][arr[0]]=true;
    for(int i=1;i<n;i++){
        for(int j=1;j<=k;j++){
            bool notTake=dp[i-1][j];
            bool take=false;
            if(arr[i]<=j)
            take=dp[i-1][j-arr[i]];
            dp[i][j]=take | notTake;
        }
    }
    return dp[n-1][k];
}
};
