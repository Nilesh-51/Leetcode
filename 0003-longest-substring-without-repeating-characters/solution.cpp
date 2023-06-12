class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n==0)return 0;
        map<char,int> mp;
        int maxLen=1;
        int i=0,j=0;
        while(j<n){
            if(mp.find(s[j])!=mp.end()){
                i=max(mp[s[j]]+1,i);
            }
            mp[s[j]]=j;
            maxLen=max(maxLen,j-i+1);
            j++;
        }
        return maxLen;
    }
};
