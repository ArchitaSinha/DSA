class Solution {
public:
    int maxDepth(string s) {
        int l=s.size(); 
        int balance =0;
        int max_depth =0;
        for(int i=0;i<l;i++){
            if(s[i]=='('){
                balance++;
                max_depth = max(balance,max_depth);
            }
            else if(s[i]==')'){
                balance --;
            }
        }
        return max_depth;
    }
};
