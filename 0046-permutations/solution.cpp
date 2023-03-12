class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int map[nums.size()];
        for(int i=0;i<nums.size();i++){
            map[i]=0;
        }
        vector<int> ds;
        vector<vector<int>> res;
        permutation(nums,res,map,ds);
        return res;
    }
    void permutation(vector<int> nums,vector<vector<int>>& res,int *map,vector<int>& ds){
        if(ds.size()==nums.size()){
            res.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(map[i]!=0)continue;
            ds.push_back(nums[i]);
            map[i]=1;
            permutation(nums,res,map,ds);
            ds.pop_back();
            map[i]=0;
        }
    }
};
