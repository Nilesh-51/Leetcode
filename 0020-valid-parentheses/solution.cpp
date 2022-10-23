class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        int i=0;
        while(s[i]!='\0'){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                stack.push_back(s[i++]);
            else{
                if(stack.empty())
                    return false;
                if(ifequal(stack.back(),s[i])){
                    stack.pop_back();
                    i++;
                }
                else return false;
            }
        }
        if(stack.empty())
            return true;
        else return false;
    }
    bool ifequal(char s1,char s2){
        if(s1=='(' && s2==')')
            return true;
        else if(s1=='{' && s2=='}')
            return true;
        else if(s1=='[' && s2==']')
            return true;
        else return false;
    }
};
