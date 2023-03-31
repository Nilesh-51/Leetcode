class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count=0;
        if(nums.size()==1){
            return 0;
        }
        for(int i=1;i<nums.size();i++){
            int tcount=0;
            if(nums[i]<=nums[i-1]){
                tcount=nums[i-1]-nums[i]+1;
                count+=tcount;
                nums[i]+=tcount;
            }
        }
        return count;
    }
};
