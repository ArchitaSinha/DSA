class Solution {
public:
    bool isAnagram(string s, string t) {
        if (sorted(s) == sorted(t)){
            return true;
        }
        return false;
    }
    string sorted(string s){
        int n = s.length();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (s[j] > s[j + 1]) {
                    swap(s[j], s[j + 1]);
                }
            }
        }
        return s;
    }

};
