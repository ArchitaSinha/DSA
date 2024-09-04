class Solution {
public:
    string reverseWords(string s) {
        s += " ";
        int l=s.length();
        string temp;
        string rev;

        for (int i = 0; i < l; i++) {
            if (s[i] != ' ') {
                temp += s[i]; // Accumulate characters for the current word
            } else {
                if (!temp.empty()) { // Check if temp is not empty
                    if (!rev.empty()) {
                        rev = temp + " " + rev; // Add word to the beginning of rev
                    } else {
                        rev = temp; // First word doesn't need an extra space
                    }
                }
                temp = ""; // Clear temp for the next word
            }
        }
        return rev;
    }
    
};
