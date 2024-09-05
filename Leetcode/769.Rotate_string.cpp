class Solution {
public:
    bool rotateString(string s, string goal) {
        int l1 = s.size();
        int l2 = goal.size();
        if(l1!=l2){return false;}
        string s1 = s + s;
       return s1.contains(goal);
    }
};
