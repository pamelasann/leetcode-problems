// Last submission: 11/24/2023, 5:17:01 PM
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // greates commom divisor is a prefix on both strings
        // if str1 + str2 = str2 + str1, strings have common divisor

        // gcd(str1.size(), str2.size()) gets length greatest common divisor 
        // str1.substr() returns str1 from index 0 to leght
        return (str1 + str2 == str2 + str1)
                ? str1.substr(0, gcd(str1.size(), str2.size()))
                : "";
    }
};