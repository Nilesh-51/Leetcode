class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> out;
        subs(nums,out,0,res);
        return res;
    }
    void subs(vector<int> inp,vector<int> out,int i,vector<vector<int>>& res){
        if(i>=inp.size()){
            res.push_back(out);
            return;
        }
        out.push_back(inp[i]);
        subs(inp,out,i+1,res);
        out.pop_back();
        subs(inp,out,i+1,res);
    }
};
