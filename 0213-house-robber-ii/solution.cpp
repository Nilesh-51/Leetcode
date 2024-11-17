class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
        return nums[0];
        int first=0;
        int second=nums[1];
        for(int i=2;i<nums.size();i++){
            int pick=nums[i];
            if(i-2>=0){
                pick+=first;
            }
            int notPick=second;
            first=second;
            second=max(pick,notPick);
        }
        int res1=second;
        second=nums[0];
        for(int i=1;i<nums.size()-1;i++){
            int pick=nums[i];
            if(i-2>=0){
                pick+=first;
            }
            int notPick=second;
            first=second;
            second=max(pick,notPick);
        }
        return max(second,res1);
    }
};
