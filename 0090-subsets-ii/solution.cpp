class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        subset(nums,0,ds,res);
        return res;
    }
    void subset(vector<int> nums,int ind,vector<int>& ds,vector<vector<int>>& res){
        res.push_back(ds);
        for(int i=ind;i<nums.size();i++){
            if(i!=ind && nums[i]==nums[i-1])continue;
            ds.push_back(nums[i]);
            subset(nums,i+1,ds,res);
            ds.pop_back();
        }
    }
};
