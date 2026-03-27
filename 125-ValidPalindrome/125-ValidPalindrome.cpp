// Last submission: 1/8/2026, 10:00:57 PM
class Solution {
public:
    bool isPalindrome(string s) {
        // Convert all uppercase to lowercase and remove non-alphanumeric chars
        for(auto& c : s) {
            c = tolower(c);
        }
        regex pattern("[^a-z0-9]");
        s = regex_replace(s, pattern, "");

        // Check if valid Palindrome
        int l = 0, r = s.size() - 1;
        while(l < r) {
            if(s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};