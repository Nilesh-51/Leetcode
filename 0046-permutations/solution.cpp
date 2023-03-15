class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        perm(nums,0,res);
        return res;
    }
    void perm(vector<int>& nums,int ind,vector<vector<int>>& res){
        if(ind==nums.size()){
            res.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            perm(nums,ind+1,res);
            swap(nums[ind],nums[i]);
        }
    }
    
};
