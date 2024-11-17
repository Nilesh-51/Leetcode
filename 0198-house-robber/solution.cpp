class Solution {
public:
    // int func(vector<int>& nums,int i,vector<int> &dp){
    //     if(i>nums.size()-1)
    //     return 0;
    //     if(i==nums.size()-1)
    //     return nums[i];
    //     if(dp[i]!=-1)
    //     return dp[i];
    //     int pick=func(nums,i+1,dp);
    //     int notPick=nums[i]+func(nums,i+2,dp);
    //     return dp[i]=max(pick,notPick);
    // }
    int rob(vector<int>& nums) {
        int first=0;
        int second=nums[0];
        for(int i=1;i<nums.size();i++){
            int pick=nums[i];
            if(i-2>=0){
                pick+=first;
            }
            int notPick=second;
            first=second;
            second=max(pick,notPick);
        }
        return second;
    }
};
