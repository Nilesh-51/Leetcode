class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> res;
        cs(candidates,target,0,ds,res);
        return res;
    }
    void cs(vector<int> candidates, int target,int ind,vector<int> &ds,vector<vector<int>> &ans) {
        if(candidates.size()==ind){
            return;
        }
        if(target==0){
            ans.push_back(ds);
            return;
        }
        if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            cs(candidates,target-candidates[ind],ind,ds,ans);
            ds.pop_back();
        }
        cs(candidates,target,ind+1,ds,ans);

}
};
