class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string s1=s;
        reverse(s1.begin(),s1.end());
        return lcs(s,s1);
    }
    int lcs(string text1, string text2) {
        vector<int> row(text2.size()+1,0),row2(text2.size()+1,0);
        for(int i=text1.size()-1;i>=0;i--){
            for(int j=text2.size()-1;j>=0;j--){
                if(text1[i]==text2[j])
                row[j]=1+row2[j+1];
                else{
                    row[j]=max(row2[j],row[j+1]);
                }
            }
            row2=row;
        }
        return row2[0];
    }
};
