// Last submission: 8/13/2024, 12:04:17 AM
class Solution {
public:
    bool isPalindrome(int x) {
        // X is not a palindrome if x is negative numbers or ends in 0
        if(x < 0 || (x != 0 && x % 10 == 0)) return false;
        
        // Reverse the second half of x to make a direct comparison to first half
        /*
            (reversed * 10) shifts the digits to the left by one position
            (x % 10) extracts the last digit of x

            (x /= 10) removed x's last digit
        */
        int reversed = 0;
        while(x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }

        // (x == reversed) checks if the first half equals the reversed second half
        // (x == reversed / 10) checks for odd numbers
        return (x == reversed)|| (x == reversed / 10);
    }
};