class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=0,n=s.length();
        string res="";
        while(i<n){
            while(i<n && s[i]==' ')i++;
            if(i>=n)break;
            j=i+1;
            while(j<n && s[j]!=' ')j++;
            if(res=="")
            res=s.substr(i,j-i);
            else
            res=s.substr(i,j-i)+" "+res;
            i=j+1;
        }
        return res;
    }
};
