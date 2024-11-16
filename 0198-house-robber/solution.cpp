class Solution {
public:
    int func(vector<int>& nums,int i,vector<int> &dp){
        if(i>nums.size()-1)
        return 0;
        if(i==nums.size()-1)
        return nums[i];
        if(dp[i]!=-1)
        return dp[i];
        int pick=func(nums,i+1,dp);
        int notPick=nums[i]+func(nums,i+2,dp);
        return dp[i]=max(pick,notPick);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return func(nums,0,dp);
    }
};
