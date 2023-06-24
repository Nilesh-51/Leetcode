class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        permutation(nums,0,res);
        return res;
    }
     void permutation(vector<int> arr,int ind,vector<vector<int>> &ans){
        if(ind==arr.size()){
            ans.push_back(arr);
            return;
        }
        for(int i=ind;i<arr.size();i++){
            swap(arr[i],arr[ind]);
            permutation(arr,ind+1,ans);
            swap(arr[i],arr[ind]);
        }
    }
    
};
