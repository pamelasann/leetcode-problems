// Last submission: 11/27/2023, 3:08:45 PM
class Solution {
public:
    int maxPower(string s) {
        int slow = 0;
        int fast = 0;
        int maxP = 0;
        while(fast < s.size()) {
            while(fast < s.size() && s[slow] == s[fast])
                fast++;
            maxP = max(maxP, fast-slow);
            slow = fast;
        }
        return maxP;
    }
};