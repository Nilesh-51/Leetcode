class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int more=target-nums[i];
            if(mp.find(more)!=mp.end())
            return {mp[more],i};
            else
            mp[nums[i]]=i;
        }
        return {};
    }
};
