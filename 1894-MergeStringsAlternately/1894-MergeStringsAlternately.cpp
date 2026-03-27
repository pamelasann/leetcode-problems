// Last submission: 10/14/2024, 4:20:15 PM
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string mergedString = "";
        int w1 = word1.size();
        int w2 = word2.size();
        
        for(int i = 0; i < max(w1, w2); i++) {
            if(i < w1) {
                mergedString.push_back(word1[i]);
            }
            if(i < w2) {
                mergedString.push_back(word2[i]);
            }
        }
        return mergedString;
    }
};