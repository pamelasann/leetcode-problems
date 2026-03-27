// Last submission: 1/13/2026, 6:28:57 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int tail = s.size() - 1;
        int len = 0;

        while(tail >= 0 && s[tail] == ' ') {
            tail--;
        }
        while(tail >= 0 && s[tail] != ' '){
            len++;
            tail--;
        }
        return len;
    }
};