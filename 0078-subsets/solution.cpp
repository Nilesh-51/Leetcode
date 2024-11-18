class Solution {
public:
void func(vector<int> arr,vector<vector<int>> &res,vector<int>& temp, int i){
        if(i==arr.size()){
            res.push_back(temp);
            return;
        }
        func(arr,res,temp,i+1);
        temp.push_back(arr[i]);
        func(arr,res,temp,i+1);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        func(nums,res,temp,0);
        sort(res.begin(),res.end());
        return res;
    }
};
