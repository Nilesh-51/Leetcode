class Solution {
public:
    void func(vector<int> nums,vector<vector<int>>& res,vector<int> temp,int i){
        if(nums.size()==i){
            res.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        func(nums,res,temp,i+1);
        temp.pop_back();
        while(i<nums.size()-1 && nums[i]==nums[i+1])
        i++;
        func(nums,res,temp,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        func(nums,res,temp,0);
        return res;
    }
};
