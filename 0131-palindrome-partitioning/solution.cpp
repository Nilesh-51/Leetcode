class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<string> ds;
        vector<vector<string>> ans;
        pp(0,s,ds,ans);
        return ans;
    }
    bool isPalindrome(string s,int start,int end){
        while(start<end){
            if(s[start]==s[end])
            {
                start++;end--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    void pp(int ind,string s,vector<string> &ds,vector<vector<string>> &ans){
        if(ind==s.length()){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<s.length();i++){
            if(isPalindrome(s,ind,i)){
                ds.push_back(s.substr(ind,i-ind+1));
                pp(i+1,s,ds,ans);
                ds.pop_back();
            }
        }
    }
};
