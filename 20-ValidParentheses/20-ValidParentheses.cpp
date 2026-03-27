// Last submission: 8/13/2024, 3:53:23 PM
class Solution {
public:
    bool isValid(string s) {
        // Handle empty string 
        if(s == "") return false;

        // Create stack to keep track of open/close parentheses
        stack<char> st;
        
        // Check each char in s
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            }
            else if(s[i] == ')') {
                if(!st.empty() && st.top() == '(') {
                    st.pop();
                }
                else {
                    return false;
                }
            }
            else if(s[i] == ']') {
                if(!st.empty() && st.top() == '[') {
                    st.pop();
                }
                else {
                    return false;
                }
            }
            else if(s[i] == '}') {
                if(!st.empty() && st.top() == '{') {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};