class Solution {
public:
    int maximum69Number (int num) {
        int r;
        vector<int> st;
        while(num){
            r=num%10;
            num=num/10;
            st.push_back(r);
        }
        for(int i=st.size()-1;i>=0;i--){
            if(st[i]==6){
                st[i]=9;
                break;
            }
        }
        int res=0;
        for(int i=0;i<st.size();i++){
            res+=st[i]*pow(10,i);
        }
        return res;
    }
};
