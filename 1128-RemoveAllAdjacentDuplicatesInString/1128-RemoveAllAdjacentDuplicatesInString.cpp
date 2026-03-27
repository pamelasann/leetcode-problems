// Last submission: 11/26/2023, 8:39:05 PM
class Solution {
public:
    string removeDuplicates(string s) {
        // pointer approach
        int i = 0;
        while(i < s.size()) {
            if(s[i] == s[i+1]) {
                s.erase(i,2); //erases both duplicate adjacent char
                if(i > 0)
                    i--; // decrement iterator as it last 2 char were removed
            }
            else
                i++; // increment
        }
        return s;
    }
};