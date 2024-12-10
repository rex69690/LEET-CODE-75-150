class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        if(s.empty()) return true;

        // Iterate through string t
        while (i < t.length()) {
            // If characters match, increment j
            if (s[j] == t[i]) {
                j++;
            }
            // If all characters of s are matched, return true
            if (j == s.size()) {
                return true;
            }
           
            i++;
        }
        return false;
    }
};
