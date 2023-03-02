class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ds;
        combSum(candidates,0,target,res,ds);
        return res;
    }
    void combSum(vector<int>& candidates,int index,int target,vector<vector<int>>& res,vector<int> sum){
        if(index>=candidates.size()){
            if(target==0){
                res.push_back(sum);
            }
            return;
        }
        if(candidates[index]<=target){
            sum.push_back(candidates[index]);
            combSum(candidates,index,target-candidates[index],res,sum);
            sum.pop_back();
        }
        combSum(candidates,index+1,target,res,sum);
    }
};
