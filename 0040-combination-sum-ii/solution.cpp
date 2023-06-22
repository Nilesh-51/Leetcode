class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        cs(candidates,target,0,ds,res);
        return res;
    }
    void cs(vector<int> candidates,int target,int ind,vector<int> &ds,vector<vector<int>> &res){
        if(target==0){
            res.push_back(ds);
            return;
        }
        for(int i=ind;i<candidates.size();i++){
            if(i!=ind && candidates[i]==candidates[i-1])continue;
            if(candidates[i]>target)break;
            ds.push_back(candidates[i]);
            cs(candidates,target-candidates[i],i+1,ds,res);
            ds.pop_back();
        }
    }
};
