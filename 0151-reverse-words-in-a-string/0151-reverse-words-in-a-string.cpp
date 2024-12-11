class Solution {
public:
    string reverseWords(string s) {
        string help = ""; // To store the current word
        string ans = "";  // To store the final result
        int n = s.length();

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (help.size() != 0) {
                    // Reverse the current word and add to the result
                    reverse(help.begin(), help.end());
                    ans += help + " ";
                    help = ""; // Clear the word buffer
                }
            } else {
                // Append character to the current word
                help += s[i];
            }
        }

        // Add the last word if it exists
        if (help.size() != 0) {
            reverse(help.begin(), help.end());
            ans += help;
        }

        // Remove trailing space if any
        if (ans.size() > 0 && ans.back() == ' ') {
            ans.pop_back();
        }

        return ans;
    }
};
