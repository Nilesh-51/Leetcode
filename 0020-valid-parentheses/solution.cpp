class Solution {
public:
    bool isValid(string s) {
        vector<char> st;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push_back(s[i]);
            }
            else{
                if(st.empty())
                return false;
                if(isSame(st.back(),s[i]))
                st.pop_back();
                else
                return false;
            }
        }
        if(st.empty())
        return true;
        return false;
    }
    bool isSame(char s1,char s2){
        if(s1=='(' && s2==')')
        return true;
        if(s1=='{' && s2=='}')
        return true;
        if(s1=='[' && s2==']')
        return true;
        return false;
    }
};
