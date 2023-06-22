class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ds;
        subset(nums,0,ds,res);
        return res;
    }
    void subset(vector<int> nums,int ind,vector<int> &ds, vector<vector<int>> &res){
        if(ind==nums.size()){
            res.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        subset(nums,ind+1,ds,res);
        ds.pop_back();
        subset(nums,ind+1,ds,res);
    }
};
