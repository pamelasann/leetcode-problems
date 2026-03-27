// Last submission: 1/1/2026, 3:26:05 AM
class Solution {
public:
    int reverse(int x) {
        int ans = 0;

        while(x != 0) {
            int digit = x % 10;
            // Check if appending the digit to ans would cause overflow or underflow
            if((ans > INT_MAX / 10) || (ans < INT_MIN / 10)){
                return 0;
            }
            ans = ans * 10 + digit;
            x = x / 10;
        }

        return ans;
    }
};