class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> ds;
        vector<vector<int>> res;
        combSum2(candidates,0,target,ds,res);
        return res;
    }
    void combSum2(vector<int>& arr,int ind,int target,vector<int> &ds,vector<vector<int>> &res){
            if(target==0){
                res.push_back(ds);
                return;
            }
        for(int i=ind;i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1]){
               continue; 
            } 
            if(arr[i]>target){
               break; 
            } 
            ds.push_back(arr[i]);
            combSum2(arr,i+1,target-arr[i],ds,res);
            ds.pop_back();
        }
    }
};
