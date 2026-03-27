// Last submission: 1/13/2026, 6:35:55 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int head = 0, tail = s.size() - 1;
        while(tail > head) {
            // switch and move pointers
            char temp = s[head];
            s[head] = s[tail];
            s[tail] = temp;
            head++;
            tail--;
        }
    }
};