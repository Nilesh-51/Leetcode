class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> res;
        combSum(candidates,0,target,ds,res);
        return res;
    }
    void combSum(vector<int>& arr,int ind,int target,vector<int> ds,vector<vector<int>>& res){
        if(ind==arr.size()){
            if(target==0){
                res.push_back(ds);
            }
            return;
        }
        if(target>=arr[ind]){
            ds.push_back(arr[ind]);
            combSum(arr,ind,target-arr[ind],ds,res);
            ds.pop_back();
        }
        combSum(arr,ind+1,target,ds,res);
    }
};
