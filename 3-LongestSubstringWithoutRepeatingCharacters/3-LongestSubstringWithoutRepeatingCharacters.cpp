// Last submission: 11/23/2023, 3:47:36 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int> track; // store unique characters

        // create index (for sliding window)
        int left = 0;
        int right = 0;
        int maxLength = 0;

        while(right < s.size()) {
            // while s[right] is in set track
            if(track.find(s[right]) != track.end()) {
                track.erase(s[left]);
                left++;
            }
            else {
                track.insert(s[right]);
                // use max() to keep the maximun length along the whole string
                maxLength = max(maxLength, right-left+1);
                right++;
            }
        }
        return maxLength;
    }
};