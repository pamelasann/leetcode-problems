// Last submission: 11/27/2023, 1:16:15 PM
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sPointer = 0;
        int tPointer = 0;
        while(tPointer < t.size()) {
            // check matching char
            if(s[sPointer] == t[tPointer]) {
                sPointer++;
                tPointer++;
            }
            else {
                tPointer++;
            }
        }
        return sPointer == s.size();
    }
};