class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        sort(nums.begin(),nums.end());
        int cnt=0,longest=1,lastSmaller=INT_MIN;
        for(int i=0;i<n;i++){
            if((long long)nums[i]-lastSmaller==1){
                cnt++;
                lastSmaller=nums[i];
            }
            else if(lastSmaller!=nums[i]){
                lastSmaller=nums[i];
                cnt=1;
            }
            longest=max(longest,cnt);
        }
        return longest;
    }
};
