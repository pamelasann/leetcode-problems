// Last submission: 11/26/2023, 9:51:11 PM
class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";

        // two pointers
        int left = 0;
        int right = s.size() - 1;

        // iterate through string
        while(left < right) {
            // move left pointer until it finds a vowel
            while(left < right && vowels.find(s[left]) == string::npos)
                left++;
            // move right pointer until it finds a vowel
            while(left < right && vowels.find(s[right]) == string::npos)
                right--;
            // swap both cahr
            swap(s[left], s[right]);

            // move pointers
            left++;
            right--;
        }
        return s;
    }
};