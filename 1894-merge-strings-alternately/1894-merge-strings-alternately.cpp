class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        
        int i = 0, j = 0;
        string answer;
        
        // Merge the strings alternately
        while (i < n && j < m) {
            answer += word1[i];
            i++;
            answer += word2[j];
            j++;
        }
        
        // Append the remaining characters from word1
        while (i < n) {
            answer += word1[i];
            i++;
        }
        
        // Append the remaining characters from word2
        while (j < m) {
            answer += word2[j];
            j++;
        }
        
        return answer;
    }
};
