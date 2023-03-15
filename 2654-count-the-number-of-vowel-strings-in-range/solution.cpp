class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        string st;
        int count=0;
        for(int i=left;i<=right;i++){
            st=words[i];
            if(isVowel(st[0]) && isVowel(st[st.size()-1])){
                count++;
            }
        }
        return count;
    }
    bool isVowel(char s){
        if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u'){
            return true;
        }
        return false;
    }
};
