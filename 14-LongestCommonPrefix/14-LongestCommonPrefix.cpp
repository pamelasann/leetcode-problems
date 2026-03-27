// Last submission: 8/13/2024, 3:40:21 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Find min lenght of the strings in strs
        int min_lenght = 0;
        for(int i = 0; i < strs.size(); i++) {
            if(min_lenght < strs[i].size()) {
                min_lenght = strs[i].size();
            }
            i++;
        }
        // Check if common prefix in strs
        int count = 0; // keep track of common prefix
        while(count < min_lenght) {
            for(int i = 0; i < strs.size(); i++){
                // (strs[0][count]) is the base case to compare s in strs
                if(strs[i][count] != strs[0][count]) {
                    return strs[0].substr(0,count);
                }
            }
            count++;
        }
        // Handles base case: empty vector and vector.size() == 1
        return strs[0].substr(0,count);
    }
};