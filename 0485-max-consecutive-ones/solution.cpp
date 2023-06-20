class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0,currentMax=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                currentMax++;
            }
            else{
                currentMax=0;
            }
            maxi=max(maxi,currentMax);
        }
        return maxi;
    }
};
