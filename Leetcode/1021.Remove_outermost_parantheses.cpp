class Solution {
public:
    string removeOuterParentheses(string s) {
        int l = s.size();
        string ans;
        int balance=0;
        for (int i=0;i<l;i++){
            if(s[i]=='(' ){
                if(balance>0){
                ans += s[i];}
                balance++;
            }
            else if(s[i] == ')'){
                balance -=1;
                if(balance >0){
                    ans+=s[i];
                }
            }
        }
        return ans;
    }
};
